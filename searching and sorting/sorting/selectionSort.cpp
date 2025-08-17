#include<iostream>
#include<vector>
#include<climits>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();
    for(int i=0; i<n-1; i++){
        int minEle = INT_MAX;
        int minEleIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<minEle){
                minEle = arr[j];
                minEleIndex=j;
            }
        }
        swap(arr[i],arr[minEleIndex]);
    }

    for(auto ele:arr)
        cout<<ele<<" ";
}

int main(){
    vector<int> arr = {44,33,55,22,11};

    selectionSort(arr);
    cout<<endl;

    return 0;
}