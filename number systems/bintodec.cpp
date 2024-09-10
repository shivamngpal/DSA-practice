#include <iostream>
#include <string>
using namespace std;

int BinaryToDecimalMethod1(int n){
    int decimalno = 0;
    int place =1;

    while(n){
        int bit = n%10;
        decimalno = decimalno + bit * place;
        n=n/10;
        place = place *2;
    }
    return decimalno;
}

//The Biwise code doesn't give the equivalent decimal number for binary binary number because-The issue arises because the input binary number (e.g., 1010) is treated as a decimal number. This means 1010 is interpreted as one thousand and ten, not the binary number 1010.
int BinaryToDecimalBitwise(int n){
    int decimalno = 0;
    int place =1;

    while(n){
        int bit = n&1;
        decimalno = decimalno + bit * place;
        n=n>>1;
        place = place << 1;
    }
    return decimalno;
}


//To correctly handle binary input, you need to treat the input as a string or manipulate each digit as if it were a bit.
int bitwise(string binaryStr) {
    int decimalNo = 0;
    int place = 1;
    int n = binaryStr.length();         //gives the length of the binary no. string

    for (int i = n - 1; i >= 0; i--) {  //starts from last to first.
        int bit = binaryStr[i] - '0';    //Used to convert string to bit let's say ASCII value of '0' is 48 and '1' is 49 so when 49-48=1 so we are converting string '1' to integer 1.
//For example-1010,For binaryStr[0] which is '1', binaryStr[0] - '0' results in 1.
// For binaryStr[1] which is '0', binaryStr[1] - '0' results in 0.
// For binaryStr[2] which is '1', binaryStr[2] - '0' results in 1.
// For binaryStr[3] which is '0', binaryStr[3] - '0' results in 0.
        decimalNo += bit * place;
        place <<= 1;  // Shift place to the left by one (equivalent to multiplying by 2)
    }

    return decimalNo;
}

int main(){
    string n;
    cout<<"Enter a binary number : ";
    cin>>n;

    // int decimalequi = BinaryToDecimalMethod1(n);
    // cout<<decimalequi<<endl;

    // int decimalequibitwise = BinaryToDecimalBitwise(n);   //Treating input as decimal no. not binary no.
    // cout<<decimalequibitwise<<endl;

    int res = bitwise(n);
    cout << res <<endl;

    return 0;
}