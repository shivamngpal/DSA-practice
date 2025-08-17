#include<iostream>
#include<cstring>
using namespace std;

bool checkPalindrome(char *arr){
    int i=0;
    int j=strlen(arr)-1;

    while(i<j){
        if(arr[i]!=arr[j])
            return false;

        i++,j--;
    }
    return true;
}

int main(){
    char arr[100];
    cin>>arr;

    cout<<arr + 'f'<<endl;
    cout<<*arr<<endl;

    bool ans = checkPalindrome(arr);
    ans ? cout<<"palindrome"<<endl : cout<<"Not a palindrome"<<endl;

    return 0;
}