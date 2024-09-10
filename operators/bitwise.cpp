#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=4;

    cout<<(a&b)<<endl;      //BITWISE AND
    cout<<(a|b) <<endl;     //BITWISE OR
    cout<<(~a)<<endl;       //BITWISE NOT
    cout<<(~b)<<endl;       //BITWISE NOT
    cout<<(~1)<<endl;       //BITWISE NOT
    cout<<(a<<1)<<endl;     //BITWISE LEFT SHIFT - multiplies 'a' with 2^1. -> 5<<1 = 5*(2^1) = 10
    cout<<(b>>1)<<endl;     //BITWISE RIGHT SHIFT -  divides 'b' with 2^1 -> 4>>1 = 4/(2^1) = 4/2 = 2
    cout<<(a^a)<<endl;      //BITWISE XOR - if same input then ouput is zero else 1 in bits. This gives 0
    cout<<(a^b)<<endl;      //5^4 - in bits if both bits are same then 0 else 1.



    return 0;
}