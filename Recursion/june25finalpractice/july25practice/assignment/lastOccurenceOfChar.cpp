#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>&v, int &target, int s, int e, int &ansIndex){
    // base case
    if(s>e)
        return ;

    int mid = s+((e-s)>>1);
    if(v[mid]==target){
        ansIndex = mid;
        solve(v,target,mid+1,e,ansIndex);
    }
    else if(v[mid]>target)
        solve(v,target,s,mid-1,ansIndex);
    
    else    
        solve(v,target,mid+1,e,ansIndex);
}

int main(){
    vector<int>v = {1,2,3,4,4,4,4,4,4,5,6,7};
    int target = 7;

    int ansIndex = -1;
    solve(v,target,0,v.size()-1,ansIndex);

    if(ansIndex==-1)
        cout<<"Target Not Found!!!"<<endl;
    else
        cout<<"Last Occurence of "<<target<<" is : "<<ansIndex<<endl;

    return 0;
}