#include<iostream>
#include<vector>
using namespace std;
//Two pointer
//Given Sorted array
//j se phle sb unique h
//i se check krenge ki same h ya different i and j, if same i++ else put value of i in j
int RemoveDuplicatesFromSortedArray(vector<int> arr){
    int j=0,i=1;
    int n = arr.size();
    while(i<n){
        if(arr[i]==arr[j])
            i++;
        else{
            //j++;
            //arr[j]=arr[i];
            //i++;

            //Alternate way ->
            arr[++j]=arr[i++];
        }
    }
    cout<<"Sorted Array ->"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return j+1; //Number of unique elements in array
}

int main(){
    vector<int> arr={0,0,1,1,1,2,2,3,3,4};

    int ans = RemoveDuplicatesFromSortedArray(arr);
    cout<<"No. of Unique elements in Array : "<<ans<<endl;

    return 0;
}