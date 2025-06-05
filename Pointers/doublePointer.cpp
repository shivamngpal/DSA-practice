#include<iostream>
using namespace std;

// pointer to a pointer - Double pointer

int main(){
    int a =5;
    int *p = &a;
    int **q = &p;   //double pointer

    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<&q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;



    return 0;
}