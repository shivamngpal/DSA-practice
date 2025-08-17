//array works on Pass By Reference in which the reference of actual array is sent to function and chnages are done in original array itself
//whereas variables work on Pass By Value which means a copy of variable is created and changes are done on that copy. No actual data is used.
//In order to use reference for variables we can use reference operator(&) with the name of variable we pass as parameter in function. -> void print(int &x){//Body}
#include<iostream>
using namespace std;

void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

void solve(int arr[], int size){
    for(int i=0; i<size; i++){
        arr[i] = arr[i] * 10;   //multiplying each element with 10.
    }
}

int main(){
    int arr[]={10,20,30,40,50};
    int size=5;

    solve(arr,size);
    print(arr,size);    //along with arrayName, we have to give size because we can't find number of elements in array.

    return 0;
}