#include<iostream>
using namespace std;

int pivotIndex(int *arr, int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        int mid= s+((e-s)>>1);

        if(mid < n-1 && arr[mid]>arr[mid+1])
            return mid;
        else if(arr[mid]<arr[mid-1])
            return mid-1;
        else if(arr[mid]<arr[s])
            e=mid-1;
        else    
            s=mid+1;
    }
    return -1;
}

int BS(int arr[], int target, int s, int e){
    int ansIndex=-1;
    while(s<=e){
        int mid=s+((e-s)>>1);
        if(arr[mid]>=target){
            ansIndex=mid;
            e=mid-1;
        }
        else
            s=mid+1;
    }
    return ansIndex;
}

int SearchInRotatedSortedArray(int arr[], int n, int target){
    int pivot= pivotIndex(arr,n);
    if(target>=arr[0] && target<=pivot)
        return BS(arr,target,0,pivot);
    else
        return BS(arr,target,pivot+1,n-1);
}

int main(){
    int arr[]={50,60,70,10,20,30,40};
    int n=7;

    int ans = SearchInRotatedSortedArray(arr,n,20);
    cout<<"Index of Target"<<ans<<endl;

    return 0;
}