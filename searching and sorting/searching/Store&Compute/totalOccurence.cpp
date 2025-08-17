#include<iostream>
#include<vector>
using namespace std;

void FirstOccurence(vector<int> &arr, int target, int &FirstIndex){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==target){
            FirstIndex=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else    
            start=mid+1;
    }
}

void LastOccurence(vector<int> &arr, int target, int &lastIndex){
    int n = arr.size();
    int start = 0;
    int end = n-1;

    while(start<=end){
        int mid = start + (end-start)/2;

        if(arr[mid]==target){
            lastIndex=mid;
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else    
            start=mid+1;
    }
}


int main(){
    vector<int> arr={10,20,20,20,20,20,20,20,20,20,30};
    int target=10;
    int FirstIndex=-1;
    int lastIndex=-1;

    FirstOccurence(arr,target,FirstIndex);
    LastOccurence(arr,target,lastIndex);

    int totalOccurence = (lastIndex-FirstIndex)+1;
    if(FirstIndex==-1 && lastIndex==-1){
        cout<<"Target Not Found"<<endl;
    }
    else{
        cout<<"Total Occurence of Target : "<<totalOccurence<<endl;
    }


    return 0;
}