#include<iostream>
using namespace std;

int NumUsingDigit(int n){
    int digit, num=0;
    cout<<"Enter "<<n<<" digits : ";
    for(int i=0; i<n; i++){
        cin>>digit;
        num=num*10 + digit;
        cout<<"Number created so far : "<<num<<endl;
    }
    return num;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    int number = NumUsingDigit(n);
    cout<<"Number created bu digits : "<<number<<endl;

    return 0;
}