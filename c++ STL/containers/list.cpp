#include<iostream>
#include<list>      //include list header file
using namespace std;

int main(){
    //creating list
    list<int> mylist;
    // cout<<mylist.size()<<endl;

//inserting elements
    mylist.push_back(0);
    mylist.push_back(10);   //inserting from back

    mylist.push_front(100); //inserting from front

//deleting element from list
    mylist.pop_back();      //deleting from back
    mylist.pop_front();     //deleting from front    

//clearing list
    mylist.clear();
    mylist.push_back(10000);
    mylist.push_back(20);
    mylist.push_back(234);
//check if empty
    (mylist.empty())?cout<<"List is empty"<<endl : cout<<"List is not empty"<<endl;

//front and back elements
    cout<<mylist.front()<<endl; //1st element in list
    cout<<mylist.back()<<endl;  //last element in list

//begin() && end() - iterator pointing to first and last element of list
    list<int>::iterator it = mylist.begin();
    while(it!=mylist.end()){
        cout<<*(it)<<" ";
        it++;
    }
    cout<<endl;

//remove all occurrence of element from list
    mylist.remove(20);  //all occurrence of 20 will be removed

    cout<<"After Removing : ";
    list<int>::iterator it2 = mylist.begin();
    while(it2!=mylist.end()){
        cout<<*(it2)<<" ";
        it2++;
    }
    cout<<endl;

//swap two list
    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);

    cout<<"list first before swap : ";
    list<int>::iterator fir = first.begin();
    while(fir!=first.end()){
        cout<<*(fir)<<" ";
        fir++;
    }
    cout<<endl;

    first.swap(second); //swap first and second list

    cout<<"list first after swap : ";
    list<int>::iterator fir2 = first.begin();
    while(fir2!=first.end()){
        cout<<*(fir2)<<" ";
        fir2++;
    }
    cout<<endl;

//insert(iterator_pos, value)-> insert value at iterator position
    first.insert(first.begin(),1);  //insert 1 at beginning of first list

    list<int>::iterator ins = first.begin();
    while(ins!=first.end()){
        cout<<*(ins)<<" ";
        ins++;
    }
    cout<<endl;


//erase in list
    cout<<first.size()<<endl;
    // first.erase(first.begin()); //1st element erase krdo
    // first.erase(first.begin(),first.end()); //start se end tk erase krdo
    cout<<first.size()<<endl;






    return 0;
}