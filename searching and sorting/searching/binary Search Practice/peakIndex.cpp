#include<iostream>
using namespace std;

int PeakIndex(int arr[], int n){
    int s=0;
    int e=n-1;
    int peak = -1;

    while(s<=e){
        int mid= s+((e-s)>>1);

        if(arr[mid]>arr[mid+1]){
            peak=mid;
            e=mid-1;
        }
        else    
            s=mid+1;
    }
    return peak;
}

int main(){
    int arr[]={10,20,30,40,45,46,47,49,50,45,35,25,15,5};
    int n=14;

    int ansIndex = PeakIndex(arr,n);
    (ansIndex==-1) ? cout<<"Invalid Array"<<endl : cout<<"Peak Index : "<<ansIndex<<endl;
    return 0;
}