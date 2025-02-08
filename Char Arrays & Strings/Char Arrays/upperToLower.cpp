#include<iostream>
#include<algorithm>
using namespace std;

int getLength(char arr[], int n){
    int length=0;
    for(int i=0; i<n && arr[i] != '\0'; i++){
        length++;
    }
    return length;
}

void UpperToLowerCase(char arr[], int n){
    // int len = getLength(arr,n);
    // for(int i=0; i<len; i++){
    //     if(arr[i]>='A' && arr[i]<='Z')
    //         arr[i] = arr[i]-'A'+'a';
    // }
    int i=0;
    while(arr[i]!='\0'){
        arr[i]=arr[i]-'A'+'a';
        i++;
    }
    cout<<"Printing Lower Case Characters : ";
    cout<<arr;
}

void LowerToUpper(char arr[], int n){
    int len = getLength(arr,n);
    for(int i=0; i<len; i++){
        if(arr[i]>='a' && arr[i]<='z')
            arr[i]=arr[i]-'a'+'A';
    }

    cout<<"Printing Upper Case Characters : ";
    cout<<arr;
}

int main(){
    char arr[100];
    int n=100;
    int choice;
    cout<<"Enter your Choice \n1.Upper To Lower \n2.Lower to Upper"<<endl;
    cin>>choice;

    if(choice==1){
        cout<<"Enter Upper Case Characters : ";
        cin>>arr;
        UpperToLowerCase(arr,n);
    }
    if(choice==2){
        cout<<"Enter Lower Case Characters : ";
        cin>>arr;
        LowerToUpper(arr,n);
    }
    if(choice != 1 && choice != 2)
        cout<<"Invalid Input!!!!"<<endl;

    return 0;
}