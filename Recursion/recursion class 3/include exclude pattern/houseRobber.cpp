//given an array nums which contains amount of money stashed in ith house.
// robber is stealing from houses but he can't steal from adjacent houses
// find the max amount, a robber can steal without getting caught.

// so we can use recursion's include/exclude pattern here as we want to find max amount

#include<iostream>
using namespace std;

int HouseRobber(int arr[], int n, int i){
    if(i>=n)
        return 0;

    int includeAns = arr[i] + HouseRobber(arr,n,i+2);   //i+2 because robber can't steal from adjacent houses
    int excludeAns = 0 + HouseRobber(arr,n,i+1);

    return max(includeAns,excludeAns);
}

int main(){
    int arr[]={1,2,3,1};
    int n=4;
    int index=0;

    int ans = HouseRobber(arr,n,index);
    cout<<"Maximum amount a robber can steal : "<<ans<<endl;

    return 0;
}