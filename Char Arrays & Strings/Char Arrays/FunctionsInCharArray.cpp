#include<iostream>
#include <string.h>
using namespace std;

int main(){
    char arr1[100];
    cout<<"Enter arr1 : ";
    cin>>arr1;

    char arr2[100];
    cout<<"Enter arr2 : ";
    cin>>arr2;

    cout<< strcat(arr1,arr2)<<endl;

    return 0;
}