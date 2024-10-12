#include<iostream>
using namespace std;

bool LinearSearch(int arr[], int size){
    int x;
    cout<<"Enter Element to Search for : ";
    cin>>x;

    for(int i=0; i<size; i++){
        if(arr[i]==x){
            // cout<<"Element found at index : "<<i<<endl;
            return true;
        }
    }

    //agr hm yaha tk aa gye mtlb pura loop traverse krliya
    //mtlb hme element ni mila array me
    //toh return false;
    return false;

}

int main(){
    int arr[5]= {10,20,30,40,50};
    int size=5;

    bool FoundOrNot = LinearSearch(arr,size);
    if(FoundOrNot){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element Not Present"<<endl;
    }


    return 0;
}