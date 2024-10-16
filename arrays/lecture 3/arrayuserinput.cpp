#include<iostream>
using namespace std;

int main(){
    int arr[3][2];
    int rowsize=3;
    int colsize=2;

    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout<<"Enter value at index ["<<row<<"]["<<col<<"] :";
            cin>>arr[row][col];
        }
    }

    //printing array
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}