//Print all digits of an integer
#include<iostream>
using namespace std;

void DigitOfInteger(int n){
    while(n>0){ //do these steps till no. is greater than 0.
        int digit = n%10;   //gives last digit of an integer
        cout<<digit<<endl;
        n=n/10;  //divide no. by 10 to get another digit
    }
}

int main(){
    int n;
    cout<<"Enter an integer to print all its digit : ";
    cin>>n;

    DigitOfInteger(n);

    return 0;
}