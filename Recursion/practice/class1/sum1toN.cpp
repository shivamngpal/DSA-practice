#include<iostream>
using namespace std;

int sum1toN(int n){
    if(n==1)
        return 1;
    
    int ans = n + sum1toN(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int res = sum1toN(n);
    cout<<"Sum : "<<res<<endl;
    

    return 0;
}