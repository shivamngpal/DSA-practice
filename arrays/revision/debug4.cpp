#include<iostream>
using namespace std;
void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n=5;
    swapAlternate(arr,n);
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}