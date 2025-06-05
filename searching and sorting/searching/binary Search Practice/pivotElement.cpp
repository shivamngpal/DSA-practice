#include<iostream>
using namespace std;

pair<int,int> pivotElement(int arr[], int n){
    pair<int,int> p = make_pair(-1,-1);
    int s=0;
    int e=n-1;
    
    while(s<=e){
        int mid = s+((e-s)>>1);

        if(arr[mid]>arr[mid+1]){
            p.first = mid;
            p.second = arr[mid];
            return p;
        }

        if(arr[mid]<arr[mid-1]){
            p.first = mid-1;
            p.second = arr[mid-1];
            return p;
        }

        if(arr[mid]<arr[s])
            e=mid-1;
        
        else
            s=mid+1;
    }
    return p;
}

int main(){
    int arr[]={50,60,70,10,20,30,40};
    int n = 7;

    pair<int,int> ans = pivotElement(arr,n);
    cout<<"pivot Index = "<<ans.first<<endl;
    cout<<"pivot Element = "<<ans.second<<endl;

    return 0;
}