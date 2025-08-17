#include<iostream>
#include <climits>
using namespace std;

int MaxNum(int arr[], int size){
    int num=INT_MIN;
    for(int i=0; i<size; i++){
        // if(arr[i]>max){
        //     max=arr[i];
        // }
    
        num = max(num,arr[i]);
        
    }
    return num;
}

int main(){
    int arr[]={10,20,30,1000,40,50,60};
    int size=7;

    int ans = MaxNum(arr,size);
    cout<<"Maximum number in Array : "<<ans<<endl; 

    return 0;
}