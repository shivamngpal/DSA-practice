#include<iostream>
#include<climits>
using namespace std;

void minNumArray(int*arr, int n, int i, int &minNum){
    if(i>=n)
        return ;
    
    if(arr[i]<minNum)
        minNum=arr[i];
    
    minNumArray(arr,n,i+1,minNum);
}

int main(){
    int arr[]={10,40,5,2,90};
    int n=5;
    int i=0;
    int minNum = INT_MAX;

    minNumArray(arr,n,i,minNum);
    cout<<"Minimum Number in array : "<<minNum<<endl;

    return 0;
}