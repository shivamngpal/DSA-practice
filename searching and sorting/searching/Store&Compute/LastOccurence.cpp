// FIND LAST OCCURENCE OF TARGET   
#include<iostream>
#include<vector>
using namespace std;

void LastOccurence(vector<int> arr, int target, int &ansIndex){
    int n = arr.size();
    int start=0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;    //using this formula, mid value will not go out of bound
        if(arr[mid]==target){
            //STORE mid in ansIndex
            ansIndex = mid; //STORE
            start=mid+1;    //COMPUTE
        }
        else if(arr[mid]<target)
            start = mid+1;

        else
            end = mid-1;
    }
}
 

int main(){
    vector<int> arr = {10,20,20,20,20,20,20,20,20,20,30};
    int target = 20;
    int ansIndex = -1;

    LastOccurence(arr,target,ansIndex);
    (ansIndex==-1) ? cout<<"Target Not Found"<<endl : cout<<"Last Occurrence Index : "<<ansIndex<<endl;

    return 0;
}