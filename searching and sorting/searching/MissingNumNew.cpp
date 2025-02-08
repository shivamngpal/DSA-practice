#include<iostream>
#include<vector>

using namespace std;
// finding first occurrence of difference =1
int MissingNumber(vector<int> & arr){
    int n=arr.size();
    int s=0;
    int e=n-1;
    int ansIndex=-1;

    while(s<=e){
        int mid=s+(e-s)/2;
        if(abs(arr[mid]-mid)==1){
            ansIndex=mid;
            e=mid-1;
        }
        if(abs(arr[mid]-mid)==0)
            s=mid+1;
    }
    return ansIndex;
}

int main(){
    vector<int> arr={0,1,2,3,4,5,6,7,8};
    int res=MissingNumber(arr);
    (res==-1) ? cout<<"Missing Number : "<<arr.size()<<endl : cout<<"Missing Number : "<<res<<endl;

    return 0;
}