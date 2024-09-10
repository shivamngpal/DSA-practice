#include<iostream>
using namespace std;

int main(){
    int a=5;                  
    cout<<(++a)<<endl;    //++a -> Pre-increment operator-> Phle increment kardo fir print kardo

    int b=10;
    cout<<(b++)<<endl;    //b++ -> Post-increment operator -> Phle print kardo fir increment kar dena -> 10 is printed then it is incremented to 11.
    // cout<<b<<endl;

    int c=15;
    cout<<(--c)<<endl;      //--c -> Phle decrement kardo,i.e., c is 15 and now it becomes 14, then print c.

    int d=20;
    cout<<(d--)<<endl;      //d-- -> Phle d=20 print kardo fir usko decrement kardena so 20 will be printed but for next time d becomes 19.

    return 0;
}