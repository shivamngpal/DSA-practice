#include<iostream>
using namespace std;

void SetKthBit(int n, int k){
    int mask=1<<k;
    int ans = n | mask;
    cout<<ans<<endl;
    // cout<<ans;
    int a=ans;
    int result=0;
    int place=1;
    while(a){
        int bit =a&1;
        result=result+bit*place;
        a=a>>1;
        place=place*10;
    }
    cout<<result;
}


int main(){
    int n,k;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<"Enter the value of K : ";
    cin>>k;


    SetKthBit(n,k);

    return 0;
}