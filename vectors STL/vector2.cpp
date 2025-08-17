#include<iostream>
#include<vector>
using namespace std;

void printVector(vector<int>v){
    int n = v.size();
    for(int i=0; i<n; i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void print2(vector<int> v){
    //this is called for-each loop -> auto is a keyword
    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    //Vector Initialization-
    vector<int> arr;    //default way with no data or 0 size.
    vector<int> arr2(5,-1); //init with size=5 and specified that each of 5 values are -1.

    //printing arr2
    cout<<"Printing arr2 : ";
    printVector(arr2);
    

//3rd and 4th way are dependent on compiler, these were introduced after C++ 11.
    //3rd way for vector init
    vector<int> arr3={10,20,30,40,50};
    printVector(arr3);

    //4th way
    vector<int> arr4{10,20,30,40,50,60};
    printVector(arr4);

//copying a vector
    vector<int> arr5={1,2,3,4,5};
    vector<int> arr6(arr5);     //arr6 is init from arr5   OR   arr5 is copied in arr6
    
    cout<<"Printing using normal loop : ";
    printVector(arr6);

    cout<<"Printing using for each loop : ";
    print2(arr6);



    vector<char> chv;
    chv.push_back('a');
    chv.push_back('b');
    chv.push_back('c');
    chv.push_back('d');
    chv.push_back('e');

    //to find first and last elements of vector.

    // cout<<"Front element : "<<chv[0]<<endl;
    // cout<<"End element : "<<chv[chv.size()-1]<<endl;

    //OR

    cout<<"Front element : "<<chv.front()<<endl;
    cout<<"End element : "<<chv.back()<<endl;

    return 0;
}