#include<iostream>
#include<climits>
using namespace std;

void maxArray(int* arr, int index, int size, int& maxNum){
    // base case
    if(index==size)
        return;
    
    // processing
    if(arr[index]>maxNum)
        maxNum=arr[index];

    // recursive call
    maxArray(arr,index+1,size,maxNum);
}


int main(){
    int arr[]={10,220,30,40,50};
    int size=5;
    int index=0;
    int maxNum=INT_MIN;

    maxArray(arr,index,size,maxNum);
    cout<<"Maximum number in Array : "<<maxNum<<endl;
    return 0;
}