#include<iostream>
using namespace std;

void printSubsequenceRE(string& s, string& ans, size_t index){
    // base case
    if(index==s.length()){
        cout<<ans<<" ";
        return;
    }
    
    char ch = s[index];

    // include
    ans.push_back(ch);
    printSubsequenceRE(s,ans,index+1);
    
    // exclude
    ans.pop_back();
    printSubsequenceRE(s,ans,index+1);
}

int main(){
    string s = "abc";
    string output="";
    int index=0;

    printSubsequenceRE(s,output,index);

    return 0;
}