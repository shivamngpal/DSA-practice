#include<iostream>
using namespace std;

void changeChar(char* arr, char oldChar, char newChar){
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]==oldChar)
            arr[i]=newChar;
        
        i++;
    }
}

int main(){
    char arr[100];
    cout<<"Enter in Char Array :";
    cin>>arr;

    char oldChar, newChar;
    cout<<"Enter Old Character :";
    cin>>oldChar;
    
    cout<<"Enter new Character :";
    cin>>newChar;

    cout<<(int)arr[6];
    changeChar(arr,oldChar,newChar);
    cout<<"New Char Array :"<<arr<<endl;

    return 0;
}