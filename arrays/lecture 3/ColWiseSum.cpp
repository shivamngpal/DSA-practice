#include<iostream>
using namespace std;

void ColWiseSum(int arr[][3],int rowsize, int colsize){
    for(int j=0; j<colsize; j++){
        int sum=0;
        for(int i=0; i<rowsize; i++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<" ";
    }
}

int main(){
    int arr[3][3]={{10,20,30},
                    {40,80,80},
                    {20,40,60}};
    int rowsize=3;
    int colsize=3;

    ColWiseSum(arr,rowsize,colsize);
    
    return 0;
}