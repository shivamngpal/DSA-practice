#include<iostream>
#include<numeric>
using namespace std;

bool PartitionEqualSubsetSum(int arr[],int target, int i, int n){
    if(target==0)
        return true;
    if(target < 0 || i>=n)
        return false;

    bool includeAns = PartitionEqualSubsetSum(arr,target-arr[i],i+1,n);
    bool excludeAns = PartitionEqualSubsetSum(arr,target,i+1,n);

    return includeAns || excludeAns;
}


int main(){
    int arr[]={1,5,11,5,5};
    int n=5;
    int target = 0;
    int index=0;
    
    int sum = accumulate(arr,arr+n,0);
    
    if(sum&1)
        cout<<"Not possible"<<endl;
    
    else{
        target = sum >> 1;
        bool ans = PartitionEqualSubsetSum(arr,target,index,n);
        (ans==0) ? cout<<"Not possible"<<endl : cout<<"Possible"<<endl;
    }
    return 0;
}