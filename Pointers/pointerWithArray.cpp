#include<iostream>
using namespace std;

int main(){
    int arr[4];
    int n=4;
    for(int i=0; i<n; i++){
        cout<<"Enter value for index "<<i;
        cin>>arr[i];
    }

    // creating pointer to array
    int* ptr = arr;
    cout<<ptr<<endl;

    cout<<arr+1<<endl;



    return 0;
}