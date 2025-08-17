#include<iostream>
using namespace std;

int main(){
    // int a=5;
    // // cout<<a;

    // int* ptrNew =0;
    // cout<<ptrNew<<endl;

    // int* ptr = &a;
    // cout<<ptr<<endl;
    // cout<<sizeof(ptr)<<endl;

    // char b = 'a';
    // char* ptrChar = &b;
    // cout<<sizeof(ptrChar)<<endl;

    // long z = 10;
    // long* ptrLong = &z;
    // cout<<sizeof(ptrLong)<<endl;


    // gives error because we have made integer variable c to store an address of a.
    // we need to make pointer variable to store address
    // int c=&a;

    // int a = 5;
    // int* p = &a;
    // // copying pointer
    // int* q = p;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // // cout<<*a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;

    int* ptr = 0;
    *ptr = 10;
    cout<<*ptr<<endl;


    return 0;
}