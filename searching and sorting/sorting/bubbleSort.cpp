#include<iostream>
using namespace std;

void bubbleSort(int* arr, int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            if(arr[j]<arr[j-1])
                swap(arr[j],arr[j-1]);
        }
    }
}
void bubbleSortDecreasing(int* arr, int n){
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            if(arr[j]>arr[j-1])
                swap(arr[j],arr[j-1]);
        }
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int size=5;

    bubbleSort(arr,size);
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    bubbleSortDecreasing(arr,size);
    for(auto ele:arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    return 0;
}