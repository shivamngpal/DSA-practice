#include<iostream>
using namespace std;

void PrintSubsequence(string str, size_t i, string ans){
    // base case
    if(i==str.length()){
        cout<<ans<<endl;
        return ;
    }

    char ch = str[i];
    // include ch
    PrintSubsequence(str,i+1,ans+ch);

    // exclude ch
    PrintSubsequence(str,i+1,ans);
}

int main(){
    string str="";
    cin>>str;
    string ans ="";
    size_t i = 0;

    PrintSubsequence(str,i,ans);


    return 0;
}