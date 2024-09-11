#include<iostream>
using namespace std;

int main(){
    int len, width;
    cout<<"Enter length && width : ";
    cin>>len>>width;

    for(int row=0; row<width; row++){
        for(int col=0; col<len; col++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}