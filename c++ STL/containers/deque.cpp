#include<iostream>
#include<deque>
using namespace std;

int main(){
    // creation
    deque<int> dq;

    // size
    // cout<<dq.size()<<endl;

    //push and pop
    dq.push_back(10);   //10
    dq.push_back(20);   //10,20
    dq.push_back(30);   //10,20,30
    dq.push_front(100); //100,10,20,30
    dq.push_front(200); //200,100,10,20,30


    dq.pop_back();  //200,100,10,20 -> 30 is popped from back
    dq.pop_front(); //100,10,20 -> 200 is popped from front

    cout<<dq.size()<<endl;

    //front and back
    cout<<dq.front()<<endl;
    cout<<dq.back()<<endl;

    //check empty
    (dq.empty()) ? cout<<"Deque is empty"<<endl : cout<<"Deque is not empty"<<endl;

    
    // iterate using iterator
    deque<int>::iterator it = dq.begin();
    while(it != dq.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;

    // accessing elements using index
    cout<<dq[2]<<endl;
    cout<<dq.at(1)<<endl;

    //clear
    cout<<dq.size()<<endl;
    dq.clear();
    cout<<dq.size()<<endl;

    //insert
    dq.insert(dq.begin(),101);  //insert 101 at begining of dq
    cout<<dq.front()<<endl;

    //erase()
    dq.erase(dq.begin(),dq.end());
    cout<<dq.size()<<endl;




    return 0;
}