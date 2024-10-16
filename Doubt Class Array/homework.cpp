#include<iostream>
using namespace std;

/*Swap
a=10, b=11
a=3, b=17
a=77, b=13
*/

int main(){
    int a,b;
    cout<<"Enter values for a and b : ";
    cin>>a>>b;
    cout<<"Before Swapping -> a : "<<a<<" b : "<<b<<endl;
//using arithmetic method
    // a=a+b;
    // b=a-b;
    // a=a-b;

//Using XOR method
    a=a^b;
    b=b^a;
    a=a^b;

    cout<<"After Swapping -> a : "<<a<<" b : "<<b<<endl;
    return 0;
}