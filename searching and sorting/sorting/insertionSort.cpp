#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>& nums){
    int n = nums.size();
    // for(int i=1; i<n; i++){
    //     // int currEle = nums[i];
    //     for(int j=i-1; j>=0; j--){
    //         if(nums[j]>nums[j+1])
    //             swap(nums[j],nums[j+1]);
    //     }
    // }

    // OR
    for(int i=1; i<n; i++){
        int key = nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1]=key;
    }
}

int main(){
    vector<int> nums{5,4,3,2,1};
    insertionSort(nums);

    for(int ele:nums)
        cout<<ele<<" ";

    return 0;
}