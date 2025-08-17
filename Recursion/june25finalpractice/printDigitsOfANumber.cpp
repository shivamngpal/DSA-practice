#include<iostream>
using namespace std;

void printDigits(int num){
    // base case
    if(num<=0)
        return;
    
    // recursive call -> same order me print krne k liye recursive call phle aayega
    printDigits(num/10);

    // processing
    int digit = num%10;
    cout<<digit<<",";
}

int main(){
    int n;
    cout<<"Enter a number to print its digits :";
    cin>>n;

    printDigits(n);
    return 0;
}