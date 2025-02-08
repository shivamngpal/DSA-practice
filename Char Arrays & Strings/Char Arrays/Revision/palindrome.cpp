#include<iostream>
#include <cstring>

using namespace std;


bool checkPalindrome(char arr[]){
    int i=0;
    int j= strlen(arr)-1;

    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else    
            return false;
    }
    // yaha tk pohch gye mtlb arr[i]==arr[j] hai so return true
    return true;
}


int main(){
    char arr[100];
    cout<<"Enter Array : ";
    cin>>arr;

    bool ans = checkPalindrome(arr);
    ans ? cout<<arr<<" is palindrome"<<endl : cout<<arr<<" is not palindrome"<<endl;

    return 0;
}