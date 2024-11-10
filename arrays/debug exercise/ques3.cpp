#include<iostream>
using namespace std;

//Correct
void populate(int arr[],int n){
    int j=0;
    for(int i=0; i <n; i = i + 2){
        arr[n-j-1] = i+2;
        arr[j] = i+1;
        j++;
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6];
    int n=6;

    populate(arr,n);

    return 0;
}


//Error
// void populate(int arr[],int n){
//     int j=0;
//     for(int i=0; i < n; i = i + 2){
//         arr[n-j] = i+2;
//         arr[j] = i+1;
//         j++;
//     }
// }