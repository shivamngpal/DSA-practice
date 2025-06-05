#include<iostream>
using namespace std;

void twosComplement(int arr[], int n){
    int m=n+1;
    int ans[m];
    // 1s complement
    for(int i=n-1; i>=0; i--){
        ans[i+1]=arr[i]^1;
    }

    // 2s complement
    int sum=0;
    int carry=1;
    int index=n;
    for(int i=n-1; i>=0; i--){
        int digit=arr[i]+carry;
        sum=digit%2;
        carry=digit/2;  

    }
    if(carry=1)
        ans[0]=1;

}

int main(){
    int arr[]={0,0,0,0,0,0};
    int n=6;

    twosComplement(arr,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}