#include<iostream>
using namespace std;

void ExtremeValues(int arr[], int size){
    int i=0; 
    int j=size-1;

    while(i<=j){
        cout<<arr[i]<<" ";
        i++;
        if(j>i){                    //ye condition isliye use kri h jb i=j hoga tb sirf ek hi baar value print ho, double value print na ho.
            cout<<arr[j]<<" ";
            j--;
        }
        
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;

    ExtremeValues(arr,size);


    return 0;
}