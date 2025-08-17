#include <iostream>
#include<vector>
using namespace std;

void DNF(vector<int> arr, int size){
    int l=0,m=0,h=size-1;
    while(m<=h){
        if(arr[m]==0){
            swap(arr[m],arr[l]);
            m++,l++;
        }
        else if(arr[m]==1){
            m++;
        }
        else{
            swap(arr[m],arr[h]);
            h--;
        }
    }

    // printing sorted array
    cout<<"Sorted Array -> ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> arr = {0,0,2,1,1,2,2,0,0,0};
    int n = arr.size();

    cout<<"Unsorted Array -> ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    DNF(arr,n);




}