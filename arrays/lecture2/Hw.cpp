#include<iostream>
using namespace std;

//Array can only contain 0s, 1s and 2s. 
// void DutchNationalFlag(int arr[], int size){
//     int ZeroCount=0,OneCount=0,TwoCount=0;
//     for(int i=0; i<size; i++){
//         if(arr[i]==0)
//             ZeroCount++;
//         if(arr[i]==1)
//             OneCount++;
//         else
//             TwoCount++;
//     }

// //Sorting an array
//     for(int i=0; i<ZeroCount; i++){
//         arr[i]=0;
//     }
//     for(int i=ZeroCount; i<(ZeroCount+OneCount); i++){
//         arr[i]=1;
//     }
//     for(int i=ZeroCount+OneCount; i<size; i++){
//         arr[i]=2;
//     }

// //Printing an array
//     cout<<"After Sorting : ";
//     for(int i=0; i<size; i++){
//         cout<<arr[i]<<" ";
//     }
// }

void TwosComplement(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]==0)
            arr[i]=1;
        else
            arr[i]=0;
    }

    int j=size-1;
    int c=0;

    arr[j]=arr[j]^1;
    if(arr[j]==1)
        c=1;
    else
        c=0;
    
    for(j=size-2; j>=0; j--){
        arr[j]=arr[j] | c;
    }

//print array
    cout<<"Array after 2's Complement : ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    // int arr[]={0,2,2,0,1,1,0,0,2,0};
    // int size=10;

    // cout<<"Before Sorting : ";
    // for(int i=0; i<size; i++){
    //     cout<<arr[i]<<" ";
    // }

    // DutchNationalFlag(arr,size);

    int arr[]={0,1,1,1,0,0,1,1,0};
    int size=9;

    TwosComplement(arr,size);

    return 0;
}