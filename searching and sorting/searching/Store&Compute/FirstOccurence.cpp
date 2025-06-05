// FIRST OCCURENCE OF TARGET
#include<iostream>
#include<vector>
using namespace std;

// Whenever we use STORE & COMPUTE, always send ansIndex by reference

int firstOccurence(vector<int> arr, int target){
    int n = arr.size();
    int start=0;
    int end = n-1;
    int ansIndex=-1;

    while(start<=end){
        int mid = start + (end-start)/2;    //using this formula, mid value will not go out of bound
        if(arr[mid]==target){
            //STORE mid in ansIndex
            ansIndex = mid; //STORE
            //Now to find First Occurence, we will have to go to left of mid
            // because 1st occurence can only be present left to mid or mid can itself be the first occurenc eof the target
            end = mid-1;    //COMPUTE
        }
        else if(arr[mid]<target)
            start = mid+1;

        else
            end = mid-1;
    }
    return ansIndex;
}



int main(){
    vector<int> arr = {10,11,12,15,20,20,20,20,20,20,30,40,50,60};
    int target = 20;
    // int ansIndex = -1;  //-1 means target not found

    int ans = firstOccurence(arr,target);
    (ans==-1) ? cout<<"Target not Found"<<endl : cout<<"Index : "<<ans<<endl; 



    return 0;
}