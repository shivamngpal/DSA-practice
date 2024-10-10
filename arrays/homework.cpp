#include<iostream>
using namespace std;

//SWAP two numbers
void swapNum(){
    int a=5;
    int b=4;

    cout<<"Numbers before swapping-";
    cout<<"a : "<<a<<endl;
    cout<<"b : "<<b<<endl;
    
    int temp = a;   //temp=5;
    a=b;            //a=4;
    b=temp;         //b=5;

    cout<<"Numbers after swapping-";
    cout<<"a : "<<a<<endl;;
    cout<<"b : "<<b<<endl;;
}

//Reverse Array
void ReverseArray(int arr[], int size){
    int i=0;
    int j=size-1;
    int temp;

    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;

        i++;
        j--;
    }

    cout<<"Reverse Array : ";
    for(int m=0; m<size; m++){
        cout<<arr[m]<<" ";
    }

}

int main(){
    // swapNum();
    int arr[6]={10,20,30,40,50,60};
    int size=6;

    ReverseArray(arr,size);

    return 0;
}