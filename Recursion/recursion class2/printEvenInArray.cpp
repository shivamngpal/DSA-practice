#include<iostream>
#include<vector>
using namespace std;

void printEven(int arr[], int n, int i, vector<int>&ans){
    if(i>=n)            //base case
        return ;

    if( !(arr[i] & 1) ){               //agr even hoga toh print krdo //ek case main krunga
        // cout<<arr[i]<<" ";
        ans.push_back(arr[i]);
    }

    printEven(arr,n,i+1,ans);        //recursive call -> Tail recursion
}

int main(){
    int arr[]={20,21,30,31,50,51,90,45,67,22};
    int n=10;
    int i=0;
    vector<int> ans;
    printEven(arr,n,i,ans);

    for(auto num:ans){
        cout<<num<<" ";
    }
    return 0;
}