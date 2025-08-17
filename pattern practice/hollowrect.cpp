#include<iostream>
using namespace std;

int main(){
    int len, width;
    cout<<"Enter length && width : ";
    cin>>len>>width;

    for(int row=0; row<width; row++){
        for(int col=0; col<len; col++){
            if(row==0 || row==width-1 || col==0 || col==len-1){     //Agr 1st ya last row hai ya 1st or last column h toh stars print kardo nahi toh spaces print kardo.
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}