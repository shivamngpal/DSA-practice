#include<iostream>
using namespace std;

int main(){
    // Static Allocation
    // integer -> Stack memory
    int a = 5;
    cout<<a<<endl;

    // Dynamic Allocation
    // integer -> Heap memory
    int *p = new int;
    *p = 10;
    cout<<p<<endl;  //address of new int
    cout<<sizeof(p)<<endl;  // size is 4 because this compiler is thinking my system has 32-bit architecture but actually it has 64-bit architecture
    cout<<*p<<endl; //value present a address of new int

    // free dynamic allocated memory using delete
    delete p;


    // Array using static memory
    int arr[5]={10,20,30,40,50};
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<arr[4]<<endl;

    // Array using dynamic memory
    int *ptr = new int[5];

    // heap me array automatically 0 se init hota h
    // but in our case it is giving random address
    cout<<ptr[0]<<ptr[1]<<ptr[2]<<endl;





    
    // *ptr=1;
    // *(ptr+1)=2;
    // *(ptr+2)=3;
    // *(ptr+3)=4;
    // *(ptr+4)=5;

    // cout<<*ptr<<" "<<*(ptr+1)<<" "<<*(ptr+2)<<" "<<*(ptr+3)<<" "<<*(ptr+4)<<endl;

    return 0;
}