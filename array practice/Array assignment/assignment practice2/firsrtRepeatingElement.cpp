#include<iostream>
#include<unordered_map>
using namespace std;

int firstRepeating(int a[], int n){
    for(int i=0; i<n; i++){
        bool isRepeated = false;
        for(int j=i+1; j<n; j++){
            if(a[i]==a[j]){
                isRepeated=true;
                return i+1;     //return first occurence, i , we are returning i+1 because in question we are given to return based on 1-based indexing.
            }
        }
    }
    return -1;
}

int firstRepeatingHashing(int a[], int n){
    unordered_map<int,int> hash;    //key value pair to store no. of times each element occurs.
    //calculating the number of times each element has occurred.
    for(int i=0; i<n; i++){ 
        hash[a[i]]++;
    }
        
    //return the location of first repeating element
    for(int i=0; i<n; i++){
        if(hash[a[i]]>1)
            return i+1;
    }
    //if no element is repeated
    return -1;
}

int main(){
    int a[]= {1,5,3,4,3,5,6};
    int n = 7;

    int ans = firstRepeating(a,n);
    (ans==-1) ? cout<<"No repeated element"<<endl : cout<<"First Repeated element is at index : "<<ans<<endl;

    return 0;
}