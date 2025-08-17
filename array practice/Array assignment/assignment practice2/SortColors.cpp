#include<iostream>
#include<vector>
using namespace std;
//Three Pointers
//Dutch National Flag

void SortColors(vector<int> &arr){
    int n = arr.size();
    int l=0, m=0, h=n-1;

    while(m<=h){
        if(arr[m]==0){
            swap(arr[l],arr[m]);
            m++;
            l++;
        }
        else if(arr[m]==1)
            m++;
        else{   //arr[m]==2
            swap(arr[h],arr[m]);
            h--;
        }
    }

    //Sorted Array
    cout<<"Sorted Array ->"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={2,0,2,1,1,0};

    SortColors(arr);

    return 0;
}