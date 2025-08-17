#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>&arr, int s, int e, int mid){
    int leftLen = mid-s+1;
    int rightLen = e-mid;

    int *left = new int[leftLen];
    int *right = new int[rightLen];

    int index=s;
    for(int i=0; i<leftLen; i++){
        left[i] = arr[index];
        index++;
    }

    for(int i=0; i<rightLen; i++){
        right[i] = arr[index];
        index++;
    }

    // merge
    int i=0;
    int j=0;
    int mainArrIndex = s;

    while(i<leftLen && j<rightLen){
        if(left[i]<right[j]){
            arr[mainArrIndex] = left[i];
            i++,mainArrIndex++;
        }
        else{
            arr[mainArrIndex] = right[j];
            j++,mainArrIndex++;
        }
    }

    while(i<leftLen){
        arr[mainArrIndex] = left[i];
        i++,mainArrIndex++;
    }
    
    while(j<rightLen){
        arr[mainArrIndex] = right[j];
        j++,mainArrIndex++;
    }

    // free memory
    delete[] left;
    delete[] right;
}


void mergeSortDivide(vector<int> &arr, int s, int e){
    // base case
    if(s>=e)
        return ;

    int mid = s+((e-s)>>1);
    // left part recursion se solve 
    mergeSortDivide(arr,s,mid);
    // right part recursion se solve 
    mergeSortDivide(arr,mid+1,e);

    // merge both parts
    merge(arr,s,e,mid);
}

int main(){
    vector<int>arr = {8,5,7,2,1,3};
    int s=0;
    int e=arr.size()-1;

    cout<<"Before Merge Sort : ";
    for(const int ele:arr)
        cout<<ele<<" ";
        
    cout<<endl;    
    
    mergeSortDivide(arr,s,e);
    
    cout<<"After Merge Sort : ";
    for(const int ele:arr)
        cout<<ele<<" ";
    
    cout<<endl;    
    return 0;
}