#include<iostream>
using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;

    swapAlternate(arr,size);

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}

//Error
// void swapAlternate(int arr[],int size){
//     for(int i=0;i<size-1;i=i+2){
//         int temp = arr[i];
//         arr[i+1] = arr[i];
//         arr[i] = temp;
//     }
// }