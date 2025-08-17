#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> arr(4,vector<int>(3,10));   //make 2d vector of row=4 and col=3 and initialize all elements with 10.

    int rowsize=arr.size();
    int colsize=arr[0].size();
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    return 0;
}