#include<iostream>
#include<vector>
#include <climits>

using namespace std;

int minValue(vector<vector<int>> arr){
    int minNum = INT_MAX;
    int rowsize=arr.size();
    int colsize=arr[0].size();
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j]<minNum){
                minNum=arr[i][j];
            }
        }
    }
    return minNum;
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

    int ans= minValue(arr);
    cout<<"Minimum Value in 2-D Vector is : "<<ans<<endl;

    return 0;
}