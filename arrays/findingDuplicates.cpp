#include<iostream>
#include<vector>
using namespace std;

// Function to find duplicate using Negative Marking Method

int DuplicateFind(vector<int> arr){
    int n = arr.size();
    for(int i=0; i<n; i++){
        int index = abs(arr[i]);

        if(arr[index]<0){
            return index;
        }
        arr[index]= arr[index]*(-1);
    }
    return -1;
    
}


int main(){
    vector<int> arr = {1,3,2,1};
    // int n = arr.size();

    int result = DuplicateFind(arr);
    (result==-1)?cout<<"No duplicate found"<<endl : cout<<"Duplicate Number is : "<<result<<endl;



    return 0;
}