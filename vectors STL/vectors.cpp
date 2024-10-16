#include<iostream>
#include <vector>
using namespace std;

//As we know we dont define size in vector, so, in backend when we insert elements in a vector, a vector keeps doubling its capacity to store elements once it is full, it again doubles its capacity.

void print(vector<int> v){
    //To print vector we need to know its size;
    int n= v.size();

//Printing a vector 

    //Use this way - 
    // for(int i=0; i<n; i++){
    //     cout<<v[i]<<" ";    
    // }

    //Alternate way-
    for(int i=0; i<n; i++){
        cout<<v.at(i)<<" ";     //This is same as above loop - works exactly same.   
    }

    cout<<endl;
}

int main(){
    vector<int> v;  //To define a vector - include vector header file
    v.push_back(1); //Inserting elements in vector
    v.push_back(2);
    v.push_back(3);
    v.push_back(4); //Here capacity is 4 and all 4 places are filled then it is doubled.
    v.push_back(5); //Vector capacity is 8.

    int cap = v.capacity();
    cout<<"Capacity : "<<cap<<endl;

    print(v);

//Popping/Deleting elements from a vector
    v.pop_back();   //Always last element is deleted.(5 is deleted)
    v.pop_back();   //4 is deleted. Vector becomes [1,2,3]

    cout<<"After Popping : ";
    print(v);

    v.clear();  //all elements are deleted.
    cout<<"After clearing a vector : ";
    print(v);

    return 0;
}