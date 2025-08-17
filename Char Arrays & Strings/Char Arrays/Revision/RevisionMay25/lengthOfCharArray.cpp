#include<iostream>
using namespace std;

int getLength(char arr[]){
    int len=0;
    int i=0;
    while(arr[i]!='\0'){
        len++;
        i++;
    }

    return len;
}

int main(){
    char arr[100];  //char array of size 100
    cout<<"Enter Data in Char Array :";
    cin>>arr;

    int len = getLength(arr);
    cout<<"Length of Char Array :"<<len<<endl;

    return 0;
}