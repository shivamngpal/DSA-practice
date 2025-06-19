#include<iostream>
using namespace std;

int binarySearch(int* arr, int start, int end, int target){
    // base case
    if(start>end)
        return -1;

    // processing
    int mid = start+(end-start)/2;
    if(arr[mid]==target)
        return mid;

    // recursive call
    else if(arr[mid]>target)
        return binarySearch(arr,start,mid-1,target);
        
    else
        return binarySearch(arr,mid+1,end,target);
}

int main(){
    int arr[]={10,20,30,40,50};
    int target=403;
    int size=5;
    int start=0;
    int end= size-1;

    int ans = binarySearch(arr,start,end,target);
    (ans==-1) ? cout<<"Target not found"<<endl : cout<<"Target found at index :"<<ans<<endl;

    return 0;
}