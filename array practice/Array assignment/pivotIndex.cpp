#include<iostream>
using namespace std;

//pivot index - ek aisa index jiske left array and right array ka sum equal ho.
//2 approaches we have studied-
//1. ek for loop chlao i=0 se i<n tk and for ek nested loop chlao for j=1 to j<n (Left array) and dusra nested loop chalao j=i+1 se j<n tk (Right array) and check kro kya kisi time pr sum of left array = sum of right array ke, if so then return i(pivot index).
//2nd approach-
//ek array to given h 
//ab do array or bnao lsum and rsum of size n and init every element from 0(contains sum of left array elements and right array elements)
//i=1 se i<n tk lsum[i]=lsum[i-1]+arr[i-1]; iss formula se lsum ke elements aayenge -  main approach yr hai ki hme baar baar 0 se iterate krke sum nikaalne ki need ni h blki hum sum ko store krte jaye or next elemnt add krde bss
//similarly i=n-2 se i>=0 tk chlao and rsum[i]=rsum[i+1]+arr[i+1];
//now ek or loop chalao and check i=0->n tk and check if lsum[i]==rsum[i] ? return i : continue; 

int PivotIndexMethod1(int arr[], int size){
    for(int i=0; i<size; i++){
        //left and right array ka sum hrr iteration k liye 0 se init hoga
        int lsum=0; 
        int rsum=0;
        //left array - excluding i
        for(int j=0; j<i; j++){
            lsum+=arr[j];
        }

        //right array - excluding i
        for(int j=i+1; j<size; j++){
            rsum+=arr[j];
        }

        if(lsum==rsum)
            return i;
    }
    //yaha tk pohch gye mtlb pivot element ni mila
    //mtlb return ni hua kch
    return -1;
}

int PivotIndexMethod2(int arr[], int size){
    int lsum[size]={0};
    int rsum[size]={0};

    for(int i=1; i<size; i++)  //i=1 isliye kyoki lsum[0] ko 0 hi rhne dena h. 
        lsum[i]=lsum[i-1]+arr[i-1];
    
    for(int i=size-2; i>=0; i--)
        rsum[i]=rsum[i+1]+arr[i+1];

    //comapring
    for(int i=0; i<size; i++){
        if(lsum[i]==rsum[i])
            return i;
    }

    return -1;
}

int main(){
    int arr[]={1,7,3,6,5,6};
    int size=6;

    // int ans = PivotIndexMethod1(arr,size);
    // ans==-1 ? cout<<"No pivot element exists"<<endl : cout<<ans<<endl;

    int ans = PivotIndexMethod2(arr,size);
    ans==-1 ? cout<<"No pivot element exists"<<endl : cout<<ans<<endl;

    return 0;
}