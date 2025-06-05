#include<iostream>
using namespace std;

bool searchArray(int arr[], int n, int i, int target){
    if(i==n)            //base case-1
        return false;
    
    if(arr[i]==target)      //base case-2
        return true;
    
    bool ans = searchArray(arr,n,i+1,target);       //recurive call
    return ans;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int i=0;
    int target;
    cin>>target;

    bool res = searchArray(arr,n,i,target);
    cout<<"Target Found ? :"<<res<<endl;

    return 0;
}