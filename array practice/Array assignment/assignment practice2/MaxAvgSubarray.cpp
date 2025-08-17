#include<iostream>
#include<vector>
#include <climits>
using namespace std;

double MaxAvgSubarray(vector<int> &arr, int k){
    int n = arr.size();
    int i=0, j=k-1, sum=0;
    for(int m=i; m<=j; m++){    //sum of 1st window
        sum = sum + arr[m];
    }
    int maxSum = sum;
    j++;
    while(j<n){
        sum=sum-arr[i++];   //Window ka 1st element minus krdiya or aage bdha diya
        sum=sum+arr[j++];   //Window m last element add kardiya or aage bdha diya
        maxSum=max(maxSum,sum);
    }
    double MaxAvg = maxSum/(double) k ;
    return MaxAvg;
}

int main(){
    vector<int> arr={1,12,-5,-6,50,3};
    int k=4;

    double ans = MaxAvgSubarray(arr,k);
    cout<<"Maximum Average of Subarray : "<<ans<<endl;

    return 0;
}