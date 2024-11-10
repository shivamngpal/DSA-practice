#include<iostream>
#include<vector>
using namespace std;

void MoveNegativeToLeft(vector<int> &arr){
    int i=0, j=1;
    int n=arr.size();
    while(j<n){
        if(arr[i]>0 && arr[j]<0){
            swap(arr[i++],arr[j++]);
        }
        else if(arr[i]<0)
            i++;
        else    //arr[i]<0 && arr[j]>0
            j++;
    }

    //Negative To left
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int> arr={1,2,-3,4,-5,6};

    MoveNegativeToLeft(arr);

    return 0;
}