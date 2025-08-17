#include<iostream>
using namespace std;

int Getlength(char arr[]){
    int i=0;
    int c=0;
    while(arr[i] != '\0'){
        c++;
        i++;

    }
    return c;
}

void ReverseCharArray(char arr[]){
    int i=0;
    int j = Getlength(arr)-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }

    cout<<"Reverse Array : "<<arr;

}

int main(){
    int n;
    cout<<"Enter Length of char array : ";
    cin>>n;
    
    char arr[n];

    cout<<"Enter char array : ";
    cin>>arr;

    ReverseCharArray(arr);

    return 0;

}