#include<iostream>
#include<string.h>
using namespace std;

string RemoveAllAdjacentDuplicates2(string full, string part){
    // Hame full me se part ki occurrence find krni h or usse erase krna h 
    // jbtk full me part ki ek bhi occurrence na bche


    // full me tab tk part ko find karte raho jabtk part present na ho full me
    while(full.find(part) != string::npos){

        // once you find part in full
        // erase it from full
        // in erase we have specify starting index and ending index
        // starting index is the index returned by find
        // and ending index would be the upto length of part
        full.erase(full.find(part), part.length());
    }
    return full;
}

int main(){
    string full;
    string part;

    cout<<"Enter Full string : ";
    cin>>full;

    cout<<"Enter part string : ";
    cin>>part;

    string ans = RemoveAllAdjacentDuplicates2(full,part);



}