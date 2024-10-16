#include<iostream>
using namespace std;

//THis is a leetcode question in which we are given an array in which every element is occuring twice except only one number, find that number.

int UniqueNumber(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];     //XOR is used because it cancels out same numbers and unique one is our answer.
    }
    return ans;
}

int main(){
    int arr[]={10,20,30,30,40,10,50,60,20,60,40};
    int size=11;

    int result = UniqueNumber(arr,size);
    cout<<"The number which occurs only once in an array is : "<<result<<endl;

    return 0;
}