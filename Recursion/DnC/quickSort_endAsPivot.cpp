#include<iostream>
#include<vector>

using namespace std;

int sortPivot(vector<int>&arr, int s, int e){
    int pivot = e;
    int i = s-1, j=s;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    // j=pivot ho jayega
    i++;
    swap(arr[i],arr[pivot]);
    return i;   //pivInd
}

void quickSort(vector<int>&arr, int s, int e){
    // base case
    if(s>=e)
        return;

    int pivot = e;
    int i = s-1, j=s;

    while(j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    // j=pivot ho jayega
    // and i(after incrementing) is the correct position for pivot
    i++;
    swap(arr[i],arr[pivot]);
    
    // without returning pivInd, we can write code here only...
    // int pivInd = sortPivot(arr,s,e);
    quickSort(arr,s,i-1);
    quickSort(arr,i+1,e);
}

int main(){
    vector<int> arr={7,2,1,8,6,3,5,4};
    int s = 0;
    int e = arr.size()-1;

    cout<<"Before Sorting"<<endl;
    for(const int& ele:arr){
        cout<<ele<<" ";
    }

    cout<<endl;
    
    quickSort(arr,s,e);
    
    cout<<"After Sorting"<<endl;
    for(const int& ele:arr){
        cout<<ele<<" ";
    }

    cout<<endl;

    return 0;
}