#include<iostream>
#include<vector>
using namespace std;

// Mountain Array
// Array in which there is index i such that elements before i are arranged in ascending Order
// and elements after i are arranged in Descending order

int PeakIndexofMountainArray(vector<int> &arr){
    int n = arr.size();
    int s =0;
    int e=n-1;
    int ansIndex=-1;

    while(s<=e){
        int mid = s+(e-s)/2;
        if(arr[mid]<arr[mid+1]){
            // Move right
            s = mid+1;
        }
        else{
            // arr[mid]>arr[mid+1]
            ansIndex=mid;   //store
            e=mid-1;        //compute
        }
    }
    return ansIndex;
}

int main(){
    vector<int> arr={10,20,70,100,60,50,40,30,25,15};

    int ans = PeakIndexofMountainArray(arr);
    (ans==-1) ? cout<<"NO PEAK Index"<<endl : cout<<"Peak Index : "<<ans<<endl;


    return 0;
}