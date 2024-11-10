#include<iostream>
#include<vector>
using namespace std;
//XOR is used -> if same bits, result is 0 else 1. (for bits)
int MissingNumber(vector<int> arr){
    int n = arr.size();
    int ans=0;
    for(int i=0; i<n; i++){
        ans ^= arr[i];
    }
    for(int i=0; i<=n; i++){
        ans^=i;
    }
    return ans;
}

int main(){
    vector<int> arr={9,6,4,2,3,5,7,0,1};

    int res = MissingNumber(arr);
    cout<<"Missing Number is : "<<res<<endl;

    return 0;
}