#include<iostream>
using namespace std;

void counting(int n){
    // base case
    if(n==0)
        return;

    counting(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter number to print counting :";
    cin>>n;

    counting(n);

    return 0;
}