#include<iostream>
#include<string.h>
#include <unordered_map>
using namespace std;

// we are given 2 strings -> key and message
// we have to map every character of key only once with alphabets from 'a' to 'z'
// using the mapping done with key, we have to decode message string

// Steps to solve
// 1. create a unordered_map
// 2. link that map to key
// 3. Using the mapping, decode the message string
// 4. return decoded message string
// ----------------------------------------
// IMPORTANT PART STARTS FROM HERE
// ----------------------------------------
// unordered_map bnaya
// ek character liya start and initialize start with 'a'
// ek character liya space
// space ko space k saath hi map krdiya
// ek index variable liya

// jb tk start<='z' hai or index<key ki length se tbtk while loop chalao
// current character store kiya
// agr currChar more than one time aa rha h map me toh index ko increment kro
// vrna currchar ko start k saath map krdo -> index and start ko increment krdo

// Now the mapping part is done

// Decoding the message
// message k hrr character pr jao 
// or message k hrr character ko mapped character se replace krdo
// return message
string DecodeMessage(string key, string message){
    unordered_map<char,char> mapping;
    char start='a';
    char space = ' ';
    mapping[space] = space;
    size_t index=0;
    while(start<='z' && index<key.length()){
        char currchar = key[index];
        if(mapping.find(currchar) != mapping.end()){
            // mtlb ek character phle se hi map ho chuka h or woh firse aajata h 
            // toh index ko increment krdo
            index++;
        }
        else{
            mapping[currchar]=start;
            start++;
            index++;
        }
        // mapping ho chuki hai
        // ab message decode karna h
    }
    string res="";
    for(size_t i=0; i<message.length(); i++){
        // char msgChar = message[i];
        // char mappedMsgchar = mapping[msgChar];
        // res.push_back(mappedMsgchar);

        message[i] = mapping[message[i]];
    }
    return message;
}

int main(){
    string key = "eljuxhpwnyrdgtqkviszcfmabo";
    string message = "zwx hnfx lqantp mnoeius ycgk vcnjrdb";


    string ans = DecodeMessage(key, message);
    cout<<"Decoded Message : "<<ans<<endl;


    return 0;
}