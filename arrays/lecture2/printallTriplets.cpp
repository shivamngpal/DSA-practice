#include <iostream>
using namespace std;

void PrintAllTriplets(int arr[],int size){
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            for(int k=0; k<size; k++){
                count++;
                cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<" ";
            }
        }
        cout<<endl;
    }
    cout<<"Count : "<<count<<endl;
}

int main(){
    int arr[]={10,20,30,40};
    int size=4;

    PrintAllTriplets(arr,size);

    return 0;
}