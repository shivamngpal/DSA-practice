#include<iostream>
using namespace std;

bool CheckEvenOrOdd(int n){
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}

//Preferred Way
void bitwiseEvenOdd(int n){
    if((n&1)==0){   //using Bitwise AND operator. As number is stored in Binary format in memory, so LSB & 1 gives 0 for even no. and 1 for odd numbers.
        cout<<n<<" is Even number";
    }
    else{
        cout<<n<<" is Odd number";
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    // bool even_odd = CheckEvenOrOdd(n);
    
    // if(even_odd){
    //     cout<<n<<" is Even.";
    // }
    // else{
    //     cout<<n<<" is Odd.";
    // }

    bitwiseEvenOdd(n);

    return 0;
}