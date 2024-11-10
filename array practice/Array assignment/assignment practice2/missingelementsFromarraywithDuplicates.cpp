#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// int MissingElement(vector<int> arr){
//     int index=-1;
//     for(int i=0; i<arr.size(); i++){
//         if(i+1 != arr[i])
//             return i+1;
//     }
//     return index;
// }

// int missingElementVistedMethod(vector<int> &arr){
//     int n = arr.size();
//     int j=-1;
//     for(int i=0; i<n; i++){
//         int index = abs(arr[i]);
//         if(arr[index-1]>0)
//             arr[index-1] *= -1; //marked visited
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i]>0)
//             return i+1;
//     }
//     return j;
// }

void missingElementSortingSwapping(vector<int> &arr){
    int n=arr.size();
    int i=0;
    while(i<n){
        int index=arr[i]-1;
        if(arr[i] != arr[index])
            swap(arr[i],arr[index]);
        else
            i++;
    }
    for(int i=0; i<n; i++){
        if(arr[i] != i+1)
            cout<<i+1<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> arr= {1,3,5,3,4};

    // sort(arr.begin(),arr.end());
    
    missingElementSortingSwapping(arr);
    // (ans==-1) ? cout<<"No missing Index"<<endl : cout<<"Missing Index is : "<<ans<<endl;


    return 0;
}