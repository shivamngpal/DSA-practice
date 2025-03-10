#include <iostream>
using namespace std;

string removeDuplicates(string s){
    string ans="";
    int index=0;
    while(s[index]!='\0'){
        if(ans.empty()){
            ans.push_back(s[index]);
            index++;
        }
        if(ans.back()==s[index]){
            ans.pop_back();
            index++;
        }
        else{
            ans.push_back(s[index]);
            index++;
        }
    }
    return ans;
}

int main(){
    string s;
    cout<<"Enter string : ";
    cin>>s;

    string res = removeDuplicates(s);
    cout<<"String after Removing all Adjacent Duplicates : "<<res<<endl;

    return 0;
}