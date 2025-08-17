#include<iostream>
using namespace std;

int RemoveDuplicates(int arr[], int n){
    int j=0; 
    int i=1;
    while(i<n){
        if(arr[i]==arr[j])
            i++;
        else    //mtlb dono different hai
            arr[++j]=arr[i++];      
            //alternate
            //j++;
            //arr[j]=arr[i];
            //i++;
    }
    return j+1;     //no of unique elements in array
}

int main(){
    int arr[]={0,0,1,1,1,2,2,3,3,4};
    int n=10;

    int ans =RemoveDuplicates(arr,n);
    cout<<"Number of Unique elements in an array : "<<ans<<endl;

    return 0;
}