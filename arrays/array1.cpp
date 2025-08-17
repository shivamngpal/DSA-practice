//Important- In C++, when you declare an array of a specific size, such as arr[4], the valid indices are arr[0] to arr[3]. However, C++ does not perform bounds checking on arrays. This means that accessing arr[4] doesn't automatically raise an error but rather accesses memory beyond the allocated space for the array. The value at arr[4] is undefined, which leads to a random garbage value being printed.
#include<iostream>
using namespace std;

int main(){
    //Creating an Array-    datatype arrayName[size];
    // int arr[10];
    
    //Defining Without giving Size-
    // int brr[];  //Generates error

    //if we define an array w/o size but insert elements using curly braces{}, then this doesn't generate any error and an array of size same as elements spaecified in curly braces{} is created.
    int crr[] = {10,20,30,40,50};   //Size is not defined but generates an array of 5 elements as we have inseted 5 elements in array.

    int drr[4]={0}; //Here it generates an array of size 4 and we insert an element 0 but by default when we don't define every element then the undefined elements are 0.

    cout<<drr[0]<<endl;;   //in array drr, print element at index 0 = 0
    cout<<crr[0]<<endl;   //in array crr, print element at index 0 = 10
    cout<<crr[1]<<endl;     //in array crr, print element at index 1 = 20

    //if we try to print value at index beyond size of the array then it either gives any garbage value or throws an error, which is Compiler dependent.
    //We are getting a garbage value.
    cout<<crr[5]<<endl; //indexing in crr is from 0 to 4 only.

    //TO FILL AN ARRAY WITH SAME VALUE- fill(Starting address, Ending Address, Value);
    int arr[4]={10,20,30,40};   //Now we want to fill 23 inplace of all elements.
    fill(arr, arr+4, 23);   //fill(S.A, E.A.,value);
    cout<<"Array after filling : "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<endl;

    return 0;
}