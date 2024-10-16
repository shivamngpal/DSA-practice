#include<iostream>
#include<vector>

using namespace std;

bool search(vector<vector<int>> arr, int target){
    int rowsize=arr.size();
    int colsize=arr[0].size();
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j]==target)
                return true; //element milgya
        }
    } 
    //yaha tk pohch gye mtlb dono loop traverse krliye
    //Or element ni mila
    return false;
}

int main(){
    vector<vector<int>> arr(4,vector<int>(3));
    int target = 76;

    int rowsize=arr.size();
    int colsize=arr[0].size();

    //input values in vector
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"Enter value at index :"<<i<<","<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    bool ans = search(arr,target);
    if(ans){
        cout<<target<<" is present"<<endl;
    }
    else{
        cout<<target<<" is not present."<<endl;
    }

    return 0;
}