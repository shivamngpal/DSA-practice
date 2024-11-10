#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

pair<int,int> TwoPointerKeyPair(vector<int>& arr, int x){
    int i=0;
    int j=arr.size()-1;
    int sum=0;
    pair<int,int> p = make_pair(-1,-1);

    while(i<j){
        sum=arr[i]+arr[j];
        if(sum==x){
            p.first = arr[i];
            p.second=arr[j];
            return p;
        }
        else if(sum>x)
            j--;
        else    //sum<x
            i++;
    }
    return p;
}

int main(){
    //Optimal solution 
    //we have to find if there exist a pair whose sum is equal to target.
    //So the BRUTE FORCE is to use 2 loops to find every possible pairs in an array, sum them and check if sum=target or not.
    //The above approach has Time Complexity of O(n^2).
    //The optimal solution is -
    //Sort the array 
    //init 2 pointer from i=0 and j=n-1.
    //sum arr[i]+arr[j]
    //if sum=x return true
    //if sum>x then the pointer j is contributing more so decrement j. j--
    //else (this is the case where sum<x) then i++;

    vector<int> arr={1,4,45,6,10,8};
    int x = 160;

    sort(arr.begin(),arr.end());
    pair<int,int> ans = TwoPointerKeyPair(arr,x);
    if(ans.first==-1 && ans.second==-1)
        cout<<"No pair equals to target exists"<<endl;
    else
        cout<<"Pair which is equal to "<<x<<" is : "<<ans.first<<","<<ans.second<<endl; 
    

    return 0;
}