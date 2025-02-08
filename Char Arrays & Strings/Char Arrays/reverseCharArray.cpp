#include<iostream>
using namespace std;

int getlength(char arr[], int n){
    int length=0;
    for(int i=0; i<n && arr[i]!='\0'; i++)
        length++;
    
    return length;
}

void ReverseCharArray(char arr[], int n){
    int i=0;
    int len= getlength(arr,n);  //here getlength fxn is giving the length of char array before Null character....So init j with len-1
    int j=len-1;

    while(i<j){
        arr[i] = arr[i]^arr[j];
        arr[j]=arr[i]^arr[j];
        arr[i]=arr[i]^arr[j];
        i++;
        j--;
    }

    cout<<"Reverse Character array :"<<arr<<endl;

}

int main(){
    char arr[100];
    int n=100;

    cout<<"Enter Characters : ";
    cin>>arr;

    ReverseCharArray(arr,n);


    return 0;
}