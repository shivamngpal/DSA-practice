#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n ,int val){
    for(int i=0;i<n;i++){
        if(arr[i]==val){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    int value=30;

    bool ans = linearSearch(arr,n,value);
    if(ans){
        cout<<value<<" is present"<<endl;
    }
    else
        cout<<value<<" is not present"<<endl;

    return 0;
}

// void linearSearch(int arr[], int n ,int val){
//     for(int i=0;i<n;i++){
//         if(arr[i]==val){
//             return;
//         }
//     }
//     return;
// }