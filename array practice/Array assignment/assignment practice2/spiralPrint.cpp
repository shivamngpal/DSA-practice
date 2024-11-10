#include<iostream>
#include<vector>
using namespace std;

void SpiralPrint(vector<vector<int>> &a){
    int rsize = a.size();
    int csize = a[0].size();

    vector<int> ans;
    int total = rsize*csize;

    int startingRow = 0;
    int endingCol = csize-1;
    int endingRow = rsize-1;
    int startingCol =0;

    int count=0;

    while(count<total){
        //starting Row
        for(int i=startingCol; i<=endingCol && count<total; i++){
            ans.push_back(a[startingRow][i]);
            count++;
        }
        startingRow++;

        //ending Column
        for(int i=startingRow; i<=endingRow && count<total; i++){
            ans.push_back(a[i][endingCol]);
            count++;
        }
        endingCol--;

        //ending Row
        for(int i=endingCol; i>=startingCol && count<total; i--){
            ans.push_back(a[endingRow][i]);
            count++;
        }
        endingRow--;

        //starting Column
        for(int i=endingRow; i>=startingRow && count<total; i--){
            ans.push_back(a[i][startingCol]);
            count++;
        }
        startingCol++;
    }

    for(int i=0; i<total; i++){
        cout<<ans[i]<<" ";
    }
}

int main(){
    vector<vector<int>> a={{1,2,3,4,5,6},
                    {7,8,9,10,11,12},
                    {13,14,15,16,17,18},
                    {19,20,21,22,23,24},
                    {25,26,27,28,29,30}};

    SpiralPrint(a);

    return 0;
}