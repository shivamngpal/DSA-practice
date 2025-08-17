#include <iostream>
using namespace std;

int main(){
    int side;
    cout<<"Enter side : ";
    cin>>side;

    //outer loop
    for(int row=0; row<side; row++){
        //inner loop
        for(int col=0; col<side; col++){
            if(row==0 || col==0 || row==side-1 || col==side-1 || col==side-row-1){  //col==side-row-1 - > this condition is for opposite diagonal && col==row is for diagonal *s
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