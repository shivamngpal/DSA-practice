#include<iostream>
using namespace std;

pair<int, int> CheckTwoSum(int arr[], int size, int target){
    pair<int,int> ans= make_pair(-1,-1);    //by default -1,-1 rkh diya hmne-> agr koi pair nahi milega toh -1,-1 return hoga.
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(arr[i]+arr[j]==target){
                ans.first=arr[i];
                ans.second=arr[j];
                return ans;     //multiple pairs me se sbse phla pair return hojayega.
            }
        }
    }
    return ans; //yaha pohch gye mtlb ans nahi mila toh fir default pair mtlb -1,-1 return kardo.
}

int main(){
    int arr[]={10,20,30,40};
    int size =4;
    int target = 60;

    pair<int,int> result = CheckTwoSum(arr,size,target);
    if(result.first==-1 && result.second==-1){
        cout<<"Pair Not found";
    }
    else
        cout<<"Pair : "<<result.first<<","<<result.second<<endl;

    return 0;
}