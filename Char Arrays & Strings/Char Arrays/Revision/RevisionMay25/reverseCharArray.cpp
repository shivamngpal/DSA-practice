#include<iostream>
#include<cstring>

using namespace std;

void reverseCharArray(char* arr){
    int i=0;
    int n = strlen(arr);
    int j=n-1;

    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main(){
    char arr[100];
    cin>>arr;

    reverseCharArray(arr);
    cout<<arr;
    return 0;
}