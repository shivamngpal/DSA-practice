#include<iostream>
using namespace std;

void increment(int a){
    a++;
    cout<<a<<endl;
}

int main(){
    int a=10;
    int *ptr=nullptr;
    cout<<ptr<<endl;

    ptr=&a;
    cout<<ptr<<endl;
    cout<<sizeof(ptr)<<endl;

    return 0;
}