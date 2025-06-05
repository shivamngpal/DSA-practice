#include<iostream>
using namespace std;

int main(){
    char ch[]="shivamnagpal";
    char* cptr = ch;

    cout<<cptr<<endl;   //this statement prints full char array

    // to print base address of char array
    cout<<&ch<<endl;

    cout<<*(ch+1)<<endl;

    return 0;
}