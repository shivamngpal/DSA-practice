#include<iostream>
using namespace std;

void UpperToLower(char arr[]){
    int i=0;
    while(arr[i] != '\0'){
        if(arr[i]>='A' && arr[i]<='Z'){
            arr[i]=arr[i]-'A'+'a';
        }
        i++;
    }

    cout<<"Lower char array : "<<arr;
}


int main(){
    char arr[100];
    cout<<"Enter char array : ";
    cin>>arr;

    UpperToLower(arr);

    return 0;
}