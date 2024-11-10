//pivot index is the index at which the sum of elements left to it and the sum of elements right to it is same.
#include<iostream>
#include<vector>
using namespace std;

int PivotIndex(vector<int> arr){
    int n= arr.size();
    vector<int> lsum(n,0);
    vector<int> rsum(n,0);

    for(int i=1; i<n; i++){
        lsum[i]=lsum[i-1]+arr[i-1];
    }
    for(int i=n-2; i>=0; i--){
        rsum[i]=rsum[i+1]+arr[i+1];
    }
    for(int i=0; i<n; i++){
        if(lsum[i]==rsum[i])
            return i;
    }

    return -1;
}

int main(){    
    vector<int> arr={1,7,3,6,5,6};

    int ans = PivotIndex(arr);
    (ans==-1) ? cout<<"No Pivot Index Found" : cout<<"Pivot index is : "<<ans;

    return 0;
}