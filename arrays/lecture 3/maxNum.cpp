#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int maxValue(vector<vector<int>> arr){
    int maxNum = INT_MIN;
    int rowsize=arr.size();
    int colsize=arr[0].size();
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j]>maxNum){
                maxNum=arr[i][j];
            }
        }
    }
    return maxNum;
}

int main(){
    vector<vector<int>> arr(3,vector<int>(3));
    int rowsize=arr.size();
    int colsize=arr[0].size();

    //input values in vector
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"Enter value at index :"<<i<<","<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    int ans= maxValue(arr);
    cout<<"Maximum Value in 2-D Vector is : "<<ans<<endl;

    return 0;
}