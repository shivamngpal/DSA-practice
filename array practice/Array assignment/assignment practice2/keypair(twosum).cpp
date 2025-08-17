//Key pair on GFG and Two sum on Leetcode
#include<iostream>
#include<algorithm>
using namespace std;

//in this approach we are first sorting the array
//Then check if sum = target, return true
//if sum > target, decrement right pointer
//else sum<target, increment left pointer
pair<int,int> TwoSum(int arr[], int n, int target){
    pair<int,int> p = make_pair(-1,-1);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]+arr[j]==target){
            p.first=arr[i];
            p.second=arr[j];
            return p;
        }
        else if(arr[i]+arr[j]>target)
            j--;
        else    //arr[i]+arr[j]<target
            i++;
    }
    return p;
}

int main(){
    int arr[]={1,4,45,6,10,8};
    int n=6;
    int target = 16;

    sort(arr,arr+n);
    pair<int,int> ans = TwoSum(arr,n,target);
    if(ans.first==-1 && ans.second==-1)
        cout<<"Key Pair Not Found :("<<endl;
    else
        cout<<"Key Pair Found :"<<ans.first<<","<<ans.second<<endl;

    return 0;
}