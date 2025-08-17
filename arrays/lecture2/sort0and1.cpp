#include<iostream>
#include<algorithm>
using namespace std;

// void sortarray(int arr[], int size){
//     int zeroCount=0;
//     int oneCount=0;

//     for(int i=0; i<size; i++){
//         if(arr[i]==0)
//             zeroCount++;
//         if(arr[i]==1)
//             oneCount++;
//     }

// //Using for loop->
//     // int i=0;
//     // for(;i<zeroCount;i++){
//     //     arr[i]=0;
//     // }
//     // for(;i<size; i++){
//     //     arr[i]=1;
//     // }

// //Instead of the above way, we can also use fill fxn->
//     fill(arr, arr+zeroCount,0);
//     fill(arr+zeroCount, arr+size,1);
// }

void SortUsingTwoPointer(int arr[], int size){
    int i=0;
    int j=size-1;

    while(i<j){
        if(arr[i]==1 && arr[j]==0){         //Agr left side 1 hai and right side 0 hai toh swap kardo.
        //Swap
            arr[i]=arr[i]^arr[j];
            arr[j]=arr[j]^arr[i];
            arr[i]=arr[i]^arr[j];
        }
        if(arr[i]==0)       //Agr 0 apne shi place pr h toh i++ kardo
            i++;
        
        if(arr[j]==1)       //Agr 1 apne shi place par hai toh j-- kardo
            j--;
    }
}

int main(){
    int arr[]={0,1,1,0,1,0,0,1,0,0,1,0,0,0,1,1,0,1,1,0};
    int size=18;

    // sortarray(arr,size);

//Using Builtin sort fxn->
    // sort(arr,arr+size);


    SortUsingTwoPointer(arr,size);

//print sorted array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}