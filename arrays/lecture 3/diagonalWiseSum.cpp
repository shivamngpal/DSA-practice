#include<iostream>
using namespace std;

void DiagonalWiseSum(int arr[][3], int rowsize){
//When we use 2 loops for diagonal wise sum then T.C. is O(n^2), so it is not recommended, use single loop. 
    int sum=0;
    for(int i=0; i<rowsize; i++){       //Time Complexity = O(n)
        sum=sum+arr[i][i];
    }

    cout<<sum<<" ";
}

void ReverseDiagonalWiseSum(int arr[][3],int rowsize){
    int sum=0;
    int c=rowsize-1;
    for(int i=0; i<rowsize; i++){
        sum=sum+arr[i][c];
        c--;
    }
    cout<<sum<<" ";
}

int main(){
    int arr[3][3]={{10,20,30},
                    {15,20,50},
                    {25,10,10}};
    int rowsize=3;
    // int colsize=3;

    // DiagonalWiseSum(arr,rowsize);
    ReverseDiagonalWiseSum(arr,rowsize);
    return 0;
}