#include<iostream>
using namespace std;

bool checkSorted(int* arr, int size, int index){
    // base case
    if(index==size-1)
        return true;

    // processing
    if(arr[index]>arr[index+1])
        return false;

    // recursive call
    return checkSorted(arr,size,index+1); 
}

int main(){
    int arr[]={10,20,30,70,50,55,85};
    int size=7;
    int index=0;

    bool ans = checkSorted(arr,size,index);
    (ans) ? cout<<"Array is Sorted"<<endl : cout<<"Array is not sorted"<<endl;
    return 0;
}