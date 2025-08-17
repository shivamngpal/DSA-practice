#include<iostream>
using namespace std;

void printSub(string s, size_t index, string temp){
    // BAse case
    if(index==s.length()){
        cout<<temp<<endl;
        return;
    }

    // include
    printSub(s,index+1,temp+s[index]);
    // exclude
    printSub(s,index+1,temp);
}

int main(){
    string s;
    cin>>s;

    string temp = "";
    printSub(s,0,temp);

    return 0;
}