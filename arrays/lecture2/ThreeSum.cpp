#include<iostream>
using namespace std;

bool CheckThreeSum(int arr[], int size, int target){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            for(int k=j+1; k<size; k++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
                    return true;
                }
            }
        }
    }
    //Yaha tk pohch gye mtlb koi triplet nahi mila.
    return false;       
}

int main(){
    int arr[]={10,20,30,40};
    int size=4;
    int target=70;

    bool result = CheckThreeSum(arr,size, target);
    if(result){
        cout<<"Triplet Found";
    }
    else
        cout<<"Triplet not found";


    return 0;
}