#include<iostream>
using namespace std;

int fibonacci(int n){
    // base case (2)
    if(n==0)    return 0;
    if(n==1)    return 1;

    // recursive call
    int ans = fibonacci(n-1)+fibonacci(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"Enter term to find it's fibonacci value :";
    cin>>n;

    cout<<n<<" th term of fibonacci series :"<<fibonacci(n)<<endl;

    return 0;
}