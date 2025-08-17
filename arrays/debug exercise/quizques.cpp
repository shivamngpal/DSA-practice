#include<iostream>
using namespace std;

void sortNegPos(int arr[], int n){
    int Negnum=0;
    for(int i=0; i<n; i++){
        if(arr[i]<0){
            swap(arr[i],arr[Negnum]);
            Negnum++;
        }
    }

    //printing sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={-2,5,6,-1,4};
    int n=5;

    sortNegPos(arr,n);

    return 0;
}