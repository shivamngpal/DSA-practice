#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={10,20,20,20,20,30,40,50};
    int* lbound = lower_bound(arr,arr+8, 70);
    (lbound==arr+8) ? cout<<"Element Not found(beyond array)"<<endl : cout<<*lbound<<endl;
    // cout<<*lbound<<endl;
    int* ubound = upper_bound(arr,arr+8, 70);
    cout<<*ubound<<endl;
    // int n=14;

    return 0;
}