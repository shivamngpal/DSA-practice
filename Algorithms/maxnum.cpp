//To find Maximum Number in an Array-
//We can initialize from num=INT_MIN   //Minimum Range of integer
//or We can also initialize from 1st index of array,i.e., arr[0] -> num=arr[0]
//When we want to find Minimum Number in Array-
//We can either initialize from INT_MAX or arr[0].
#include<iostream>
#include<limits.h>  //according to ChatGPT, <algorithm> header file includes max function.
using namespace std;

int maxNum(int arr[], int size){
    int num=INT_MIN;    //Here INT_MIN is undefined, so either include <limits.h> or include <climits> header file
    for(int i=0; i<size; i++){
        num = max(num,arr[i]);  //store the max from num or arr[i] in num. -> num ya arr[i] me se jo bhi bda h usse num me store kardo.
        // if(arr[i]>num){         //instead of IF statement we can also use max() fxn, which is a Built-in function in c++
        //     num=arr[i];
        // }
    }
    return num;
}

int main(){
    int arr[5]={10,59,43,423,255};
    int size=5;

    int MaximumNumber = maxNum(arr,size);
    cout<<"Maximum Number in Array is : "<<MaximumNumber<<endl;

    return 0;
}