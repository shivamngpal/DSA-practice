#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string name = "Maharana Pratap";
    // accessing
    cout<<name[0]<<endl;
    cout<<name.at(0)<<endl;

    // printing using Iterator
    auto it = name.begin();
    while(it!= name.end()){
        cout<< *it <<" ";
        it++;
    }
    cout<<endl;

    // length of a string
    cout<<name.length()<<endl;

    // front and back
    cout<<name.front()<<endl;
    cout<<name.back()<<endl;

    // clear
    // name.clear();

    // check if empty
    (name.empty()) ? cout<<"String is empty"<<endl : cout<<"String is not empty"<<endl;

    // concatenation
    string fname="Shivam";
    string lname="Nagpal";
    string namenew = fname + " " + lname;

    cout<<namenew<<endl;

    // fetch substring from a string
    // StringName.substr(starting Index, Length of substring)
    string a = name.substr(0,5);
    cout<<a<<endl;   

    // StringName.substr(starting Index) -> prints substring from S.A to end of string name
    cout<<name.substr(5)<<endl;

    // find word in a string
    // gives starting index of the word if found else -1
    string word="Prataph";
    int ans = name.find(word);
    cout<<ans<<endl;

    // compare
    // gives 0 when both strings are same
    // gives <0 when first string is lexicographically smaller than second string
    // gives >0 when first string is lexicographically greater than second string
    string s1="shivam";
    string s2="ahivam";

    cout<< s1.compare(s2)<<endl;

    return 0;
}