#include<iostream>
using namespace std;

void PrintAllPairs(int arr[], int size){
//for printing all the pairs
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout<<"("<<arr[i]<<","<<arr[j]<<") ";
        }
        cout<<endl;
    }

//for printing only the lower triangle-
    // for(int i=0; i<size; i++){
    //     for(int j=i; j<size; j++){
    //         cout<<"("<<arr[i]<<","<<arr[j]<<") ";
    //     }
    //     cout<<endl;
    // }

//for printing upper triangle-
    // for(int i=1; i<size; i++){
    //     for(int j=0; j<i; j++){
    //         cout<<"("<<arr[i]<<","<<arr[j]<<") ";
    //     }
    //     cout<<endl;
    // }
}


int main(){
    int arr[]={10,20,30,40};
    int size=4;

    PrintAllPairs(arr,size);
    return 0;
}