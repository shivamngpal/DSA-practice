// using Expand Around Center
#include<iostream>
#include<string.h>
using namespace std;

int ExpandAroundCenter(string s, int i, size_t j){
    int count=0;
    while(i>=0 && j<s.length() && s[i]==s[j]){
        count++;
        i--;
        j++;
    }
    return count;
}

int main(){
    string str;
    cout<<"Enter a String to count total palindromic Substrings :";
    cin>>str;

    int totalSubstr = 0;

    for(size_t center=0; center<str.length(); center++){
        int i=center;
        int j=center;

        int oddPalindromeSubstr = ExpandAroundCenter(str,i,j);

        i=center;
        j=center+1;

        int evenPalindromeSubstr = ExpandAroundCenter(str,i,j);

        totalSubstr = totalSubstr + oddPalindromeSubstr + evenPalindromeSubstr;
    }

    cout<<"Total Palindromic Substrings are : "<<totalSubstr<<endl;

    return 0;
}