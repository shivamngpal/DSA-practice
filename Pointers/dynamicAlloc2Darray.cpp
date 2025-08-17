#include<iostream>
using namespace std;

int main(){
    // 2D array -> static allocation
    // int arr[2][4]={
    //         {1,2,3,4},
    //         {5,6,7,8}
    //         };

    // for(int i=0; i<2; i++){
    //     for(int j=0; j<4; j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // 2D array -> Dynamic allocation
    int **arr = new int* [4];   //4 rows
    for(int i=0; i<4; i++){
        arr[i]= new int[3];     //hrr row me 3 columns
    }

    // taking input in 2D array
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<"Enter value for index["<<i<<" ,"<<j<<"]:";
            cin>>arr[i][j];
        }
    }

    // printing 2d array
    for(int i=0; i<4; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // free all array individually
    for(int i=0; i<4; i++){
        delete[] arr[i];
    }

    return 0;
}