#include <iostream>
// using namespace std;

bool CheckSorted(int arr[], int n, int i){
    if(i==n-1)            //base case
        return true;
    
    // if(i>0 && i<(n-1) && arr[i]<arr[i-1] || arr[i]>arr[i+1])
    //     return false;
    if(arr[i]>arr[i+1])
        return false;

    return CheckSorted(arr,n,i+1);      //recursive call -> Tail recursion
}

int main() {
    int arr[]={10,10,10,10,10};
    int n=6;
    int index=0;

    bool ans = CheckSorted(arr,n,index);
    ans ? std::cout<<"Sorted"<<std::endl : std::cout<<"Not Sorted"<<std::endl;
    return 0;
}