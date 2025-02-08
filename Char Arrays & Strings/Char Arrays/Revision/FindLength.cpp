#include<iostream>
using namespace std;

int FindLength(char arr[]){
    int i=0;
    int count=0;
    while(arr[i] != '\0' ){ //this will give length of arr excluding Null character
        count++;
        i++;
    }
    return count;
}


int main(){
    char arr[100];  //char array of capacity 100
    cout<<"Input arr : ";
    cin>>arr;

    int ans = FindLength(arr);
    cout<<"Length of char array : "<<ans<<endl;


    return 0;
}