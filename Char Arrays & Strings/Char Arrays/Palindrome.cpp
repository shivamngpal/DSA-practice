#include<iostream>
using namespace std;

int getlength(char arr[], int n){
    int length=0;
    for(int i=0; i<n && arr[i]!='\0'; i++)
        length++;
    
    return length;
}

bool Palindrome(char arr[], int n){
    int i=0;
    int len=getlength(arr,n);
    int j=len-1;

    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else    
            return false;
    }
    return true;
}

int main(){
    char arr[100];
    int n=100;

    cout<<"Enter characters : ";
    cin>>arr;

    bool ans=Palindrome(arr,n);
    ans ? cout<<arr<<" is palindrome"<<endl : cout<<arr<<" is not palindrome"<<endl;



    return 0;
}