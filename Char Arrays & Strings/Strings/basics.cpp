#include<iostream>
#include<string.h>
using namespace std;

int main(){
    // creation
    string name;

    // input
    // default delimiter is space -> as soon as we give space in input string, it stops storing data.
    // cout<<"Enter String : ";
    // cin>>name;

    // input using push_back
    // name.push_back('s');
    // name.push_back('h');
    // name.push_back('i');
    // name.push_back('v');
    // name.push_back('a');
    // name.push_back('m');

    // input using getline(cin,stringName);
    // syntax -> getline(input_stream, StringName, delimiter);
    getline(cin, name, '\n');   //used for strings 

    // deletion -> pop_back
    // deletes last character
    // name.pop_back();

    // output/printing
    cout<<name<<endl;

    // Accessing using Index
    // cout<<"String 2nd char : "<<name[1]<<endl;



    return 0;
}