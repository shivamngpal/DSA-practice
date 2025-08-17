#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int MissingNumber(vector<int> &arr){
    sort(arr.begin(),arr.end());
    int n = arr.size();
    int s = 0;
    int e = n-1;
    // int index=-1;

    while(s<=e){
        int mid = s + (e-s)/2;

        if(arr[mid]==mid)
            // right me jao
            s = mid+1;

        else
            // Left me jao
            e = mid-1;
    }
    // return missing number
    return s;
}

int main(){
    vector<int> arr={3,4,6,5,0,7,2,1,8};
    int ans  = MissingNumber(arr);
    cout<<"Missing Number : "<<ans<<endl;

    return 0;
}