#include<iostream>
#include<algorithm>

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
    // int temp;

//Using temp variable
    // while(i<j){
    //     temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp;

    //     i++;
    //     j--;
    // }

//using swap fxn
    // while(i<j){
    //     swap(arr[i], arr[j]);
    //     i++;
    //     j--;
    // }

//OR - swap fxn - For Professionals 
    // while(i<j)
    //     swap(arr[i++],arr[j--]);    //using post increment/decrement which means phle use krlo fir plus/minus krdo-> so arr[i], arr[j] will be used then we will use arr[i++] and arr[j--]

//Using STL library -> reverse method -> reverse(Starting address, ending address)
    reverse(arr,arr+size);

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