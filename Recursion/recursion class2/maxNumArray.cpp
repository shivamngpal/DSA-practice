#include<iostream>
#include <climits>
using namespace std;

void MaxNumArray(int arr[], int n, int i, int &maxnum){ //always send flag to store maximum number as pass by reference 
    if(i>=n)
        return ;
    
    if(arr[i]>maxnum)
        maxnum=arr[i];
    
    MaxNumArray(arr,n,i+1,maxnum);
}

int main(){
    int arr[]={10,30,50,20,40};
    int n=5;
    int i=0;
    int maxnum = INT_MIN;

    MaxNumArray(arr,n,i,maxnum);
    cout<<maxnum<<endl;
    // int res = MaxNumArray(arr,n,i,maxnum);
    // cout<<"Maximum Number : "<<res<<endl;

    return 0;
}