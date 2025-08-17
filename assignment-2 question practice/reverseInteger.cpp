#include<iostream>
using namespace std;

int ReverseInteger(int n){
    int num=0;
    bool isNeg = false;
    if(n<0){
        n = -n; //Makes -ve number, a +ve number
        isNeg=true;
    }
    while(n>0){
        int bit = n%10;
        num = num *10 + bit;
        n=n/10;
    }
    return isNeg ? -num : num;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int ans = ReverseInteger(n);
    cout<<ans;

    return 0;
}