#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main(){
    // creation
//     unordered_map<string,string> table;

//     // insertion
//     table["in"] = "India";  //uo_map_name[key]=value;
//     table.insert(make_pair("en","England"));    //uo_map_name.insert(make_pair(key,value));

//     pair<string,string> p;
//     p.first="br";
//     p.second="Brazil";
//     table.insert(p);

//     cout<<table.size()<<endl;

//     // clear
//     // table.clear();
//     // cout<<table.size()<<endl;

//     // check empty
//     (table.empty()) ? cout<<"Unordered Map is Empty"<<endl : cout<<"Unordered Map is not Empty"<<endl;

//     // Accessing elements
//     cout<<table.at("in")<<endl;
//     cout<<table["en"]<<endl;

//     // Updation
//     table.at("in") = "Bharat";
//     table["br"] = "Brazillll";

//     cout<<table.at("in")<<endl;
//     cout<<table.at("br")<<endl;

//     // Iterating over Unordered_map using iterator
//     unordered_map<string,string>::iterator it = table.begin();
//     while(it != table.end()){
//         pair<string,string> p = *it;    //map stores a key:value pair and when we are iterating over it, map returns a pair and we store that pair into a new pair p and then print it.
//         cout<<p.first<<" "<<p.second<<endl;
//         it++;
//     }
//     // data is printed in random order in unordered_map

//     // erase()
//     // table.erase(table.begin());
//     // cout<<table.size()<<endl;

//     // table.erase(table.begin(),table.end());
//     // cout<<table.size()<<endl;

//     //finding key in table
//     string keyf;
//     cout<<"Enter key to find : ";
//     cin>>keyf;
//     if(table.find(keyf)==table.end()){
//         cout<<"Key not Found"<<endl;
//     }
//     else{
//         cout<<"Key found and Value is : "<<table.at(keyf)<<endl;
//     }


// // count - count of key can be 0 or 1, if 0 then not found else key found
//     if(table.count("in")==0){
//         cout<<"Key not Found"<<endl;
//     }
//     if(table.count("in")==1){
//         cout<<"Key Found"<<endl;
//     }


//ordered_map is same as unordered_map
    //creation
    map<string,string> table;

    // insertion
    table["in"] = "India";  //uo_map_name[key]=value;
    table.insert(make_pair("en","England"));    //uo_map_name.insert(make_pair(key,value));

    pair<string,string> p;
    p.first="br";
    p.second="Brazil";
    table.insert(p);

    cout<<table.size()<<endl;


    //Accessing elements
    cout<<table.at("in")<<endl;
    cout<<table["en"]<<endl;

    // Iterating over ordered_map using iterator -> gives values in lexicographical order or dictionary order
    map<string,string>::iterator it = table.begin();
    while(it != table.end()){
        pair<string,string> p = *it;    //map stores a key:value pair and when we are iterating over it, map returns a pair and we store that pair into a new pair p and then print it.
        cout<<p.first<<" "<<p.second<<endl;
        it++;
    }

    return 0;
}