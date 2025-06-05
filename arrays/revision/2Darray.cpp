#include<iostream>
using namespace std;

int main(){
    int rowSize;
    int colSize;

    cout<<"Enter row size :";
    cin>>rowSize;
    cout<<"Enter column size :";
    cin>>colSize;
    int arr[rowSize][colSize];

    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<"Enter element for "<<j<<","<<i<<":";
            cin>>arr[j][i];
        }
    }
    // printing array
    for(int i=0; i<rowSize; i++){
        for(int j=0; j<colSize; j++){
            cout<<arr[i][j]<<endl;
        }
    }
    return 0;
}