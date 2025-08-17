#include<iostream>
using namespace std;

int powOfTwo(int n){
    // base case
    if(n==0)
        return 1;

    int powTwo = 2 * powOfTwo(n-1);
    return powTwo;
}

int main(){
    bool isNeg = false;
    int n;
    cin>>n;

    if(n<0){
        n=-n;
        isNeg = true;
    }

    int ans = powOfTwo(n);
    isNeg ? cout<<1.0/ans<<endl : cout<<ans<<endl;

    return 0;
}