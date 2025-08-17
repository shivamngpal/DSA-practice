#include<iostream>
#include<stack>
#include<string.h>
using namespace std;

int main(){
    stack<char> s;
    string str="hello";

    for(char i:str){
        s.push(i);
    }

    while(!s.empty()){
        cout<<s.top();
        s.pop();
    }


    // stack<int> s;
    // string str = "hello";
    // cout<<str<<endl;

    // for(size_t i=0; i<str.length(); i++){
    //     char ch = str[i];
    //     s.push(ch);
    // }

    // cout<<s.top()<<endl;
    // string ans="";
    // while(!s.empty()){
    //     char charInt = s.top();
    //     ans.push_back(charInt);
    //     s.pop();
    // }

    // cout<<ans<<endl;
    // string ans="";
    // for(int i=s.size()-1; i>0; i--){
    //     ans.push_back(s[i]+"0")
    // }

    return 0;
}