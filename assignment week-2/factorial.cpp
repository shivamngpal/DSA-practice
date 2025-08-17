#include<iostream>
using namespace std;

int factorial(int n){   //When we try to find factorial of big numbers it shows 0 because int can only store 4 byte and factorial of large number like 45 overflows 4 byte so we can use long long int to store big values
    int fact=1;
    for(int i=n; i>1; i--){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int fact_num = factorial(n);
    cout<<fact_num<<endl;

    return 0;
}