#include<iostream>
using namespace std;

int main(){
// 1.Built-in swap fxn - USE THIS METHOD

    // int a=5, b =6;
    // cout<<"Before Swap -> ";
    // cout<<"a : "<<a<<" b : "<<b <<endl;

    // swap(a,b);

    // cout<<"a : "<<a<<" b : "<<b ;

//2. Temp variable

    // int a=5, b =6;
    // cout<<"Before Swap -> ";
    // cout<<"a : "<<a<<" b : "<<b <<endl;

    // int temp=a;
    // a=b;
    // b=temp;

    // cout<<"a : "<<a<<" b : "<<b ;

//3. Arithmetic Method

    // int a=5, b =6;
    // cout<<"Before Swap -> ";
    // cout<<"a : "<<a<<" b : "<<b <<endl;

    // a=a+b;  //Here a becomes a=11
    // b=a-b;  //then b=6 but 11-6 = 5 , so, b becomes b=5
    // a=a-b;  //b=5, a=11, new a=11-5   a=6   

    // //therefore swappped a becomes 6 and b becomes 5
    // cout<<"a : "<<a<<" b : "<<b ;

//4. XOR Method -> If bits are same then its 0 else 1.
    int a=5, b =6;
    cout<<"Before Swap -> ";
    cout<<"a : "<<a<<" b : "<<b <<endl;

    a=a^b;  //5^6 = 3, a becomes 3
    b=b^a;  //6^3 = 5, b becomes 5
    a=a^b;  //3^5 = 6, a becomes 6
    
    cout<<"a : "<<a<<" b : "<<b ;

    return 0;
}