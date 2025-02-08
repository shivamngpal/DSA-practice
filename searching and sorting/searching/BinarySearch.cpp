#include<iostream>
#include<vector>

using namespace std;

bool BinarySearch(vector<int> &arr, int x){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = (start+end)/2;

        if(arr[mid]==x)
            return true;

        else if(arr[mid]<x)
            start = mid+1;
        
        else    
            end = mid-1;
    }
    return false;
}


int main(){
    vector<int> arr = {2,8,10,20,30,34,46,79};
    int target = 46;

    bool ans = BinarySearch(arr,target);
    cout << (ans ? "Found" : "Not Found") << endl;

    return 0;
}