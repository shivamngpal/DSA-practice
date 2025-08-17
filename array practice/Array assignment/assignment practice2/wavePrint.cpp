#include<iostream>
using namespace std;

void WavePrint(int a[][4], int rsize, int csize){
    for(int j=0; j<csize; j++){
        if((j&1)==0){
            for(int i=0; i<rsize; i++){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=rsize-1; i>=0; i--){
                cout<<a[i][j]<<" ";
            }
        }
    }
}

int main(){
    int arr[3][4]={{1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12}};
    int rsize=3;
    int csize=4;

    WavePrint(arr,rsize,csize);
}