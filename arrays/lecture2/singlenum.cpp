#include<iostream>
using namespace std;

int UniqueNum(int arr[], int size){
    int ans =0;
    for(int i=0; i<size; i++){
        ans = ans ^ arr[i];     //using XOR operator because same number will cancel out and unique number will be our answer.
    }
    return ans;
}

int main(){
    int arr[]={2,2,6,7,7,8,8,5,6};
    int size=9;

    int result = UniqueNum(arr,size);
    cout<<"Unique number in array is : "<<result;
}