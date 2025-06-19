#include<iostream>
using namespace std;

void printOdd(int* arr, int size, int i){
    // base case
    if(i==size)
        return;

    // processing
    if(arr[i]&1)
        cout<<arr[i]<<" ";

    printOdd(arr,size,i+1);
}

int main(){
    int arr[]={10,11,12,13,14,15};
    int size=6;
    int index=0;

    printOdd(arr,size, index);

    return 0;
}