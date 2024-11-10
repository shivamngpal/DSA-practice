#include<iostream>
#include<vector>    //always include vector header file for its usage
using namespace std;

int main(){
    vector<int> marks; //vector of type int

//begin and end gives an iterator pointing at beginning and ending of the vector.
    // cout<<*(marks.begin())<<endl;   //marks.begin() gives an iterator pointing at the beginning of vector and *(marks.begin()) gives value at position of iterator.
    // cout<<*(marks.end())<<endl; //giving some random value

//Inserting in vector - push_back
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);

    cout<<"printing vector size:"<<marks.size()<<endl;

//Deleting last element from the vector
    marks.pop_back();
    cout<<"size of vector after popping last element:";
    cout<<marks.size()<<endl;

//printing first and last element in vector
    cout<<"1st element in vector:"<<marks.front()<<endl;
    cout<<"last element in vector:"<<marks.back()<<endl;

//check if vector is empty or not
    (marks.empty())?cout<<"vector is empty"<<endl : cout<<"vector is not empty"<<endl;

//indexing in vectors / accessing using index
    cout<<marks[1]<<endl;
    cout<<marks[4]<<endl;   //garbage value

    //same as marks[index]
    cout<<marks.at(1)<<endl;

//capacity of vector
    cout<<"printing capacity:"<<marks.capacity()<<endl; //4 because capacity gets doubled everytime vector upto its size is filled
    //if i insert one more element in vector then its size would be 4 and capacity also 4
    //then if one more element is inserted after full size then capacity would be doubled,i.e., 4x2=8

    marks.push_back(40);
    cout<<"size:"<<marks.size()<<" capacity:"<<marks.capacity()<<endl;

    cout<<"After inserting one more element"<<endl;
    marks.push_back(50);
    //here capacity is doubled
    cout<<"size:"<<marks.size()<<" capacity:"<<marks.capacity()<<endl;

//reserve is used to reserve the minimum capacity of vector - atleast reserve honi hi chahiye 
    marks.reserve(20);
    cout<<"capacity after reserving 20 blocks:"<<marks.capacity()<<endl;

//to check maximum size of a vector set by system - machine dependent
    cout<<"max size of vector:"<<marks.max_size()<<endl;

//clear - clears all the element in vector
    // marks.clear();
    // cout<<"vector size after clearing all elements:"<<marks.size()<<endl;

//insert(iterator_position,element) - inserts the element at the position of the iterator
    marks.insert(marks.begin(),100);
    cout<<marks.size()<<" "<<marks[0]<<endl;

//erase(iterator_position) - erases only element at that position
//erase(iterator_begin, iterator_end) - erases element from begin iterator to end iterator
    marks.erase(marks.begin());
    cout<<marks.front()<<endl;  //updated first element in vector

    marks.erase(marks.begin(),marks.begin()+2);
    cout<<marks.front()<<endl;

//swapping elements of two vectors
    vector<int> first = {1,2,3,4};
    vector<int> second = {100,200,300,400};

    first.swap(second);
    cout<<"printing first vector";
    cout<<first[0]<<" "<<first[1]<<" "<<first[2]<<" "<<first[3]<<endl;
    cout<<"printing second vector";
    cout<<second[0]<<" "<<second[1]<<" "<<second[2]<<" "<<second[3]<<endl;

//for each loop - tarveersing vector elements
    for(int i:marks){   //for each integer i inside vector marks, print i
        cout<<i<<" ";   //print i
    }
    cout<<endl;
//travering using iterator
    //1. create an iterator , syntax - vector<datatype>::iterator iteratorName = Initialize_from;
    vector<int>::iterator it = marks.begin();

    while(it != marks.end()){   //tabtk chlao jb tk iterator end tk na pohch jaye
        cout<<*(it)<<" ";   //printing value at it
        it++;               //move it to next position
    }
    cout<<endl;
    

    return 0;
}