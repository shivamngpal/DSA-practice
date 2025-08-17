#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int i=0;
    int j=size-1;

    while(i<j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

//Printing an Array
    cout<<"Reversed array : ";
    for(int k=0; k<size; k++){
        cout<<arr[k]<<" ";
    }
}

int main(){
    int arr[]={10,20,30,40,50,60,70};
    int size=7;

    ReverseArray(arr,size);

    return 0;
}