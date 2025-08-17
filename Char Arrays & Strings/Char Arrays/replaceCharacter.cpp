#include<iostream>
using namespace std;

int main(){
    char arr[100];
    int index=0;

    cout<<"Input in Char array : ";
    cin>>arr;
    
    char oldChar;
    char newChar;

    cout<<"Enter character to replace : ";
    cin>>oldChar;

    cout<<"Enter new character : ";
    cin>> newChar;
    
    while(arr[index] != '\0'){
        if(arr[index]==oldChar){
            arr[index]=newChar;
        }
        index++;
    }

    // printing arr with changes
    cout<<arr<<endl;

    return 0;

}