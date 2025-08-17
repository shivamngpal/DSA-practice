// Search a Element in Nearly Sorted Array
// Nearly Sorted Array is a Array in which element at 'i' in Sorted Array can be found on indices 'i-1','i','i+1' of nearly sorted array
#include<iostream>
#include<vector>
using namespace std;

int SearchInNearlySortedArray(vector<int> &arr, int target){
    int n=arr.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]==target)
            return mid;
        else if((mid-1)>=0 && arr[mid-1]==target)
            return mid-1;
        else if((mid+1)<n && arr[mid+1]==target)
            return mid+1;
        else if(arr[mid]<target)
            s=mid+3;    //here mid+3 is done because we have looked at i and i+1, so if we do mid+2, we again search for i+1 which is already visited
        else
            e=mid-3;    //same as mid+3
    }
    return -1;
}

int main(){
    vector<int> arr= {3,10,40,20,50,80,70};
    int target=3;
    int ans = SearchInNearlySortedArray(arr,target);
    
    (ans==-1) ? cout<<"Element not found"<<endl : cout<<"Element found at Index : "<<ans<<endl;


    return 0;
}