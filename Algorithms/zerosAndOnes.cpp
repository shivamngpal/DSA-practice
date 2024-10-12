#include<iostream>
using namespace std;

void CountZerosOnes(int arr[], int size){
    int countZero=0;
    int countOne=0;
    for(int i=0; i<size; i++){
        if(arr[i]==1){
            countOne++;
        }
        else{
            countZero++;
        }
    }
    cout<<"Number of Ones in Array : "<<countOne<<endl;
    cout<<"Number of Zeros in Array : "<<countZero<<endl;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter number of elements in Array of 1's and 0's : ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"Enter element at Index "<<i<<" :";
        cin>>arr[i];
    }

    CountZerosOnes(arr,size);

    return 0;
}