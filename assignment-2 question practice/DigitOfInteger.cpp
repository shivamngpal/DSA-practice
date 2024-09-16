#include<iostream>
using namespace std;

void PrintDigitOfInteger(int n){
    while(n>0){
        int digit = n%10;   //Or using bitwise => digit = n&1;
        cout<<digit<<endl;
        n=n/10;
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    cout<<"All the digits of "<<n<<"are (in reverse order): "; 
    PrintDigitOfInteger(n);

    return 0;
}