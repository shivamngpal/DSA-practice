#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n<=1)
        return 1;

    int factAns = n*factorial(n-1);
    return factAns;
}

int main(){
    int n;
    cout<<"Enter number :";
    cin>>n;
    // int factNum=1;
    // for(int i=1; i<=n; i++){
    //     factNum = factNum*i;
    // }
    cout<<"Factorial of "<<n<<" is :"<<factorial(n)<<endl;
    return 0;
}