#include<iostream>
using namespace std;

// bool binarySearch(int arr[], int n, int target){
//     int s=0;
//     int e=n-1;
//     while(s<=e){
//         int mid= s+((e-s)>>1);
//         if(arr[mid]==target)
//             return true;
        
//         else if(arr[mid]>target)
//             e=mid-1;
//         else    
//             s=mid+1;
//     }
//     return false;
// }

bool binarySearch(int arr[], int &s, int &e, int &mid, int target){
    if(s>e)
        return false;
    
    if(arr[mid]==target)
        return true;

    if(target > arr[mid]){
        s=mid+1;
        mid=s+((e-s)>>1);
    }
        
    
    if(target<arr[mid]){
        e=mid-1;
        mid=s+((e-s)>>1);
    }
    bool ans = binarySearch(arr,s,e,mid,target);
    return ans;
}


int main(){
    int arr[]={10,20,30,40,50};
    int n = 5;
    int s=0;
    int e=n-1;
    int mid= s+((e-s)>>1);
    int target;
    cin>>target;

    bool res = binarySearch(arr,s,e,mid,target);
    (res) ? cout<<"Target found"<<endl : cout<<"Target not found"<<endl;

    return 0;
}