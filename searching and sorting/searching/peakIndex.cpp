#include<iostream>
#include<vector>

using namespace std;

int peakIndex(vector<int>& arr){
    // using STORE & COMPUTE Technique
    int n=arr.size();
    int s =0;
    int e=n-1;
    int ansIndex=-1;

    while(s<=e){
        int mid = s+(e-s)/2;

        if(arr[mid]<arr[mid+1])
            s=mid+1;    //right jao
        
        // arr[mid]>arr[mid+1]
        else{
            ansIndex=mid;
            e=mid-1;
        }
    }
    return ansIndex;
}

int main(){
    vector<int> arr={10,20,30,40,50,45,35,25,15,5};

    int pInd = peakIndex(arr);
    (pInd==-1) ? cout<<"Empty Array"<<endl : cout<<"Peak Index : "<<pInd<<endl;


    return 0;
}