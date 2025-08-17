#include<iostream>
using namespace std;

// global - outside fxn
int x=2;

void fun(){
    int x=60;
    cout<<x<<endl;
    cout<<::x<<endl;
}

int main(){
    int x=4;    //local variable -> accessible within the scope of this fxn only
    cout<<x<<endl;  //prints value of local variable

    fun();

    ::x = 10;   //global variable can be accessed using ::
    cout<< ::x <<endl;  //prints value of global variable

    {
        int x=50;   //local variable to this scope
        {
            int x=11;
            // cout<<::x<<endl;
            cout<<x<<endl;
        }
        cout<<x<<endl;  //50
    }

    return 0;
}