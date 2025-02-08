#include<iostream>
using namespace std;

// in this question we have to find if a given string is a valid palindrome or not
// But the catch is that we can delete at most one character from the string check for palindrome
// if after deleting at most one character, it satisfies all conditions for palindrome then it is a valid palindrome
// else it is not a valid palindrome

// We have written the code such that first we are finding if s[i]==s[j]
// increment i and decrement j
// else we can delete either value present at i or value present at j
// check for both and after deleting the value check if it satisfies palindrome conditions or not
// if either of them satisfies the condition then return true else false

bool checkpalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else    
            return false;
    }
    return true;
}

bool validPalindrome2(string s){
    int i=0;
    int j=s.length()-1;

    while(i<=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        else{
            bool delI=checkpalindrome(s,i+1,j);
            bool delJ=checkpalindrome(s,i,j-1);
            bool result = delI || delJ;
            return result;
        }
    }
    return true;
}


int main(){
    string s;
    cout<<"Enter String : ";
    cin>>s;


    bool ans=validPalindrome2(s);
    ans ? cout<<s<<" is a valid palindrome"<<endl : cout<<s<<" is not valid palindrome"<<endl;

    return 0;
}