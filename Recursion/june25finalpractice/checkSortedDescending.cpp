#include<iostream>
using namespace std;

bool checkDescendingSorted(int* arr, int size, int index){
    // base case
    if(index==size)
        return true;
    
    // processing
    if((index+1) < size && arr[index]<arr[index+1])
        return false;

    // recursive call
    // yaha mai return likhna bhool jaata hu
    return checkDescendingSorted(arr,size,index+1);
}

int main(){
    int arr[]={50,40,35,25,20,15,5};
    int size = 7;
    int i=0;

    bool ans = checkDescendingSorted(arr,size,i);
    ans ? cout<<"Array is sorted"<<endl : cout<<"Array is not sorted"<<endl;

    return 0;
}