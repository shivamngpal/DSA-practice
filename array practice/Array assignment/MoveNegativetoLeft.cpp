#include<iostream>
using namespace std;
//move all -ve numbers to left of an array and the order doesn't matter.
void UsingDutchNationalFlag(int arr[], int size){
    int l=0; 
    int h=size-1;

    while(l<h){
        if(arr[l]<0)
            l++;
        else if(arr[h]>0)
            h--;
        else{
            swap(arr[l],arr[h]);
            l++, h--;
        }
    }

    //printing array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

//MY APPROACH
void MoveNegativeToLeft(int arr[], int size){
    int i=0;
    int j=1;

    while(j<=size-1){
        if(arr[i]<0)
            i++;
        else if(arr[i]>0 && arr[j]<0){
            swap(arr[i],arr[j]);
            i++, j++;
        }
        else    
            j++;
    }

    //print -ve to left array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={1,2,-3,4,-5,6,-23,78,23,-32};
    int size=10;

    MoveNegativeToLeft(arr,size);
    // UsingDutchNationalFlag(arr,size);

    return 0;
}