#include<iostream>
#include<algorithm>
using namespace std;

int MissingNumberMethod1(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]==i)
            continue;
        else
            return i;
    }
    //yaha tk pohch gye mtlb koi missing number nahi mila
    //sorted array h mtlb i=arr[i] same hai toh missing elemnt ek hi hoga or woh 'n' hoga
    return n;
}

int MissingNumberMethod2(int arr[], int n){
    //Using XOR
    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i]; //saare elements ka xor krdiya
    }

    //saare index ka xor
    for(int i=0; i<=n; i++){
        ans=ans^i;
    }

    return ans; //Unique number jo bhi hoga mtlb jo number missing hai
}

int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n=9;

    sort(arr,arr+n);    //present in <algorithm>
    
    // int ans=MissingNumberMethod1(arr,n);
    // cout<<"Missing Number in array is : "<<ans<<endl;

    int result=MissingNumberMethod1(arr,n);
    cout<<"Missing Number in array is : "<<result<<endl;

    return 0;
}