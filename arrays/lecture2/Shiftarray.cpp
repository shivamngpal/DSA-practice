#include<iostream>
using namespace std;

void RotateShift(int arr[], int size, int shift){
    shift = shift%size; //shift is the number of elements to shift with.

    if(shift==0)
        return ;

    //Making a copy of last n elements in temp array
    int temp[10000];
    int index=0;
    for(int i=size-shift; i<size; i++){
        temp[index]=arr[i];
        index++;
    }

    //shifting each element by n elements-
    for(int i=size-1; i>=0; i--){
        if(i-shift >=0){
            arr[i]=arr[i-shift];
        }
        
    }

    //Copy temp in original array
    for(int i=0; i<shift; i++){
        arr[i]=temp[i];
    }

}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int shift=7;

    cout<<"Before : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    RotateShift(arr,size,shift);

    cout<<"After : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}