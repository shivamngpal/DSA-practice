#include<iostream>
using namespace std;
//Hme tbtk chlaana h jbtk i<=j ke jaise hi j<i ke tb bnd krdenge kyoki fir same elements dobara print hojayenge vrna.

void PrintExtremes(int arr[], int size){
    // for(int i=0; i<=size/2;i++){
    //     cout<<arr[i]<<" ";
    //     for(int j=size-1; j>size/2; j--){
    //         cout<<arr[j]<<" ";
    //     }
    // }
    int i=0;
    int j=size-1;
    while(i<=j){
        cout<<arr[i]<<" ";  //we can also use if(i==j){cout<<arr[i]; break;} else{cout<<arr[i]; i++; cout<<arr[j]; j--;}
        i++;
        if(j>i){
            cout<<arr[j]<<" ";
            j--;
        }
    }

}

int main(){
    int arr[100];
    int size;
    cout<<"Enter number of elements : ";
    cin>>size;

    for(int i=0; i<size; i++){
        cout<<"Enter element at index "<<i<<" : ";
        cin>>arr[i];
    }

    PrintExtremes(arr,size);


    return 0;
}