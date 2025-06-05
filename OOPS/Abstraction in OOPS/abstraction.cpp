// abstract class
#include<iostream>
#include "bird.h"

using namespace std;

void BirdDoesSomething(Bird *bird){
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
}


int main(){
    Bird *bird = new Eagle();   //this is abstraction where we just change an object in interface and the whole implementation changes but it is hidden from user.
    BirdDoesSomething(bird);

    return 0;
}