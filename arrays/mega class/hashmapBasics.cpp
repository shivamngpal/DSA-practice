#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    // creation
    unordered_map<int,int> mp; //in unordered map, order is not maintained

    // insertion
    mp[1]=10;   //map ke key 1 me 10 store kardo
    mp[2]=20; 
    mp[3]=30;   

    // accessing/printing
    // 1. using iterator
    // unordered_map<int,int>::iterator it;
    // for(it=mp.begin(); it!=mp.end(); it++){
    //     cout<<"key: "<<it->first<<endl;
    //     cout<<"Value: "<<it->second<<endl;
    // }
    
    // 2. for each loop
    for(auto it:mp){
        cout<<"key: "<<it.first<<endl;
        cout<<"Value: "<<it.second<<endl;
    }

    // finding
    // avg case=O(1)
    // worst case = O(n)
    if(mp.find(2)!=mp.end())
        cout<<"Found"<<endl; // found
    else
        cout<<"Not Found"<<endl; // not found
        
        // deletion
    mp.erase(2);
    if(mp.find(2)!=mp.end())
        cout<<"Found"<<endl; // found
    else
        cout<<"Not Found"<<endl; // not found
        
    return 0;
}