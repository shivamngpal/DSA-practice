#include<iostream>
using namespace std;

pair<int,int> SearchArray(int arr[][4], int rowsize, int colsize, int target){
    pair<int,int> index = make_pair(-1,-1);
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            if(arr[i][j]==target){
                index.first=i;
                index.second=j;
            }
        }
    }
    return index;
}

int main(){
    int arr[3][4] = {{10,20,30,40},
                    {50,55,57,59},
                    {69,72,79,89}};
    int rowsize=3;
    int colsize=4;
    int target=570;

    pair<int,int> result = SearchArray(arr,rowsize,colsize,target);
    if(result.first==-1 && result.second==-1){
        cout<<target<<" is not present in array"<<endl;
    }
    else{
        cout<<target<<" is present at index : ["<<result.first<<"]["<<result.second<<"]"<<endl;
    }


}