#include<iostream>
using namespace std;

void printArray(int *arr, int n, int index){
    // base case
    if(index==n)
        return ;
    
    cout<<arr[index]<<" ";  //processing
    printArray(arr,n,index+1);  //recursive call -> Tail recursion
}


int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int index =0;

    printArray(arr,n,index);

    return 0;
}