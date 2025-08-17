#include<iostream>
using namespace std;

int sum1toN(int n){
    if(n==1)            //base case
        return 1;
    
    int ans = n + sum1toN(n-1);     //recursive call -> Tail Recursion
    return ans;             
}

int main(){
    int n;
    cin>>n;

    int res = sum1toN(n);
    cout<<"Sum from 1 to "<<n<<" is :"<<res<<endl;

    return 0;
}