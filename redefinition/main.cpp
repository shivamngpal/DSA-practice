#include <iostream>
using namespace std;

int main(){
    int age=10;
    {
        int age=15;
        cout<<"your age is :"<<age<<endl; //This prints 15
        
    }//this bracket defines the scope of age=15. 
    
    cout<<"your age is :"<<age;   //prints 10

    return 0;
}