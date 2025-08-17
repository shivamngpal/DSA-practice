#include<iostream>
#include<cstring>
using namespace std;

void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start; i<=j; i++,j--){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
    cout<<input<<endl;
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!=0){
        i++;
        count++;
        if(input[i]=='\0'){
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
    }
}


int main(){
    char input[100];
    cout<<"Enter input in char array : ";
    cin>>input;

    int n = strlen(input);
    int start = 0;

    reverseString(input, n, start);





    return 0;
}