#include<iostream>
using namespace std;

void Transpose(int arr[][3], int rowsize, int colsize){
    // int brr[rowsize][colsize];
    // for(int j=0; j<colsize; j++){
    //     for(int i=0; i<rowsize; i++){
    //         brr[i][j]=arr[j][i];
    //     }
    // }

    //W/o using another array, we can transpose array with this way-
    for(int i=0; i<rowsize; i++){
        for(int j=i; j<colsize; j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //printing transpose
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    //printing Transpose of matrix
    // for(int i=0; i<rowsize; i++){
    //     for(int j=0; j<colsize; j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
}

int main(){
    int arr[3][3]={{10,11,12},
                    {20,21,22},
                    {30,31,32}};
    
    int rowsize=3;
    int colsize=3;

    //Before Transpose
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Transpose of matrix : "<<endl;
    Transpose(arr,rowsize,colsize);

    return 0;
}