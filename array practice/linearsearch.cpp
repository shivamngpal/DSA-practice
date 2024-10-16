#include<iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        if(arr[i]==target)
            return i;
    }

    return -1;
}

int main(){
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int target=40;

    int ans = LinearSearch(arr,size,target);
    if(ans==-1){
        cout<<"Element not present in array";
    }
    else{
        cout<<"Element present at index : "<<ans<<endl;
    }


    return 0;
}