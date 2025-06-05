#include<iostream>
using namespace std;

void counting(int n){
    // base case
    if(n==0)
        return;

    // processing
    cout<<n<<" ";

    // recursive call
    counting(n-1);
}

int main(){
    int n;
    cout<<"Enter number to print reverse counting :";
    cin>>n;

    counting(n);
    return 0;
}