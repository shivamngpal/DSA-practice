#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;

int main(){
// creation
    // set<int> st;

    // // insertion
    // st.insert(10);
    // st.insert(20);
    // st.insert(20);  //duplicates are removed automatically
    // st.insert(40);
    // st.insert(50);

    // //traverse -> sorted result
    // set<int>::iterator it = st.begin();
    // while(it != st.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // cout<<endl;


//UNORDERED_SET
    // creation
    unordered_set<int> st;

    // insertion
    st.insert(1130);
    st.insert(204);
    st.insert(203); 
    st.insert(402);
    st.insert(510);

    //traverse -> random elements -> not sorted
    unordered_set<int>::iterator it = st.begin();
    while(it != st.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    //size
    cout<<st.size()<<endl;

    //check empty
    if(st.empty()){
        cout<<"Set is Empty"<<endl;
    }
    else{
        cout<<"Set is not Empty"<<endl;

    }

    // erase
    // st.erase(st.begin(),st.end());
    // cout<<st.size()<<endl;

    // find()
    if(st.find(203)==st.end()){
         cout<<"Element Not Found"<<endl;
    }
    else{
        cout<<"Element Found!!"<<endl;
    }

    // count -> 0 - not found       1 - Found
    if(st.count(1130)==0){
        cout<<"Element not found"<<endl;
    } 
    if(st.count(1130)==1){
        cout<<"Element Found"<<endl;
    }



    return 0;
}