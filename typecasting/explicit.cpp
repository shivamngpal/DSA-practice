#include <iostream>
using namespace std;

//EXPLICIT CONVERSION
int main(){
//double to int 
    double pi = 3.14159265;
    int intPi = (int)pi;
    cout<<intPi<<endl;

//float to char
    float floatingNumber = 65.35;  
    char charValue = (char)floatingNumber;  //65.35 is converted to 65 and equivalent character to 65 is printed
    cout<<charValue<<endl;

//int to float
    int a = 10;
    int b = 3;
    float res = a/ (float)b;
    cout<<res<<endl;


    return 0;
}