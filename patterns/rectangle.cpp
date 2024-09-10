#include<iostream>
using namespace std;

int main(){
    int len, breadth;
    cout<<"Enter the length and breadth of a Rectangle : ";
    cin>>len>>breadth;

    for(int row=0; row<breadth; row++){
        for(int col=0; col<len; col++){
            cout<<"* ";
        }
        cout<<endl;
    }


    return 0;
}