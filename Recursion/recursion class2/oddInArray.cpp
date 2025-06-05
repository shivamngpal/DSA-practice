#include<iostream>
using namespace std;

void printOdd(int arr[], int n, int i){
    if(i>=n)            //base case
        return ;

    if(arr[i]&1){               //agr odd hoga toh print krdo //ek case main krunga
        cout<<arr[i]<<" ";
    }

    printOdd(arr,n,i+1);        //recursive call -> Tail recursion
}

int main(){
    int arr[]={10,11,12,13,14,15};
    int n=6;
    int i=0;
    printOdd(arr,n,i);
    return 0;
}