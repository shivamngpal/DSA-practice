#include<iostream>
using namespace std;

int linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    int target=49;
    int ans = linearSearch(arr,n,target);
    (ans==-1) ? cout<<"Target Not found"<<endl : cout<<target<<" found at index :"<<ans<<endl;
    return 0;
}