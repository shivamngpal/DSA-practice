#include<iostream>
using namespace std;

int sumOneToN(int n){
    // base case
    if(n==1)    return 1;

    // recursive call
    int ans = n + sumOneToN(n-1);
    return ans;
}

int main(){
    int num;
    cout<<"Enter a number to get Sum from 1 to number :";
    cin>>num;

    cout<<"Sum from 1 to "<<num<<" is : "<<sumOneToN(num)<<endl; 
    return 0;
}