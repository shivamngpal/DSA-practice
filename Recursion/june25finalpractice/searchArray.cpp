#include<iostream>
using namespace std;

int searchArray(int *arr, int index, int size, int target){
    // base case
    if (index==size){
        return -1;
    }

    // processing
    if(arr[index]==target)
        return index;

    // recursive call
    return searchArray(arr,index+1,size,target);
}

int main(){
    int arr[]={10,20,30,40,50};
    int target=10;

    int ans= searchArray(arr,0,5,target);
    (ans==-1) ? cout<<"Target not found"<<endl : cout<<"Target found at index :"<<ans<<endl;
    return 0;
}