#include <iostream>
#include <math.h>  //We can also include <cmath> instead of math.h
using namespace std;

//In this fxn we are using pow fxn which gives floating point results and that leads to error in our output for 4,5,7, etc.
//So we use another method which does not require pow function in DecimalToBinaryGPT fxn hence we get the correct result.
int DecimalToBinaryMethod1(int n){  
    //Division Method
    int binaryno = 0;
    int i=0;
    while(n>0){
        int bit = n%2;
        // cout <<bit <<endl;
        binaryno = bit * pow(10,i++) + binaryno;
        n=n/2;

    }
    return binaryno;
}

int DecimalToBinaryGPT(int n){
    int binaryno=0;
    int place =1;

    while(n>0){
        int bit = n%2;
        binaryno = bit * place + binaryno;
        n=n/2;
        place *=10; 
    }
    return binaryno;
}

int DecimalToBinaryMethod2(int n){  
    //Bitwise Method
    int binaryno = 0;
    int place=1;
    while(n>0){
        int bit = n&1;                          //gives LSB (last bit)
        // cout <<bit <<endl;
        binaryno = bit * place + binaryno;
        n=n>>1;                                 //divide no. by 2^(1) =2
        place *= 10;

    }
    return binaryno;
}

int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;

    // int binaryConv = DecimalToBinaryMethod1(n);    //Wrong
    // cout<<binaryConv<<endl;
    
    // int binaryConvGPT = DecimalToBinaryGPT(n);     //Corrected code
    // cout<<binaryConvGPT<<endl;

    int binaryConvBitwise = DecimalToBinaryMethod2(n);     //Corrected code
    cout<<binaryConvBitwise<<endl;
    // cout<<binarynum<<endl; 



    return 0;
}
