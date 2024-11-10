#include<iostream>
using namespace std;

void commonElement(int a1[],int a2[], int a3[], int n1, int n2, int n3){
    for(int i=0; i<n1; i++){
        for(int j=0; j<n2; j++){
            for(int k=0; k<n3; k++){
                if(a1[i]==a2[j] && a2[j]==a3[k]){
                    cout<<a1[i]<<endl; 
                }
            }
        }
    }
}

int main(){
    int a1[] = {1,5,10,20,40,80};
    int a2[] = {6,7,20,80,100};
    int a3[] = {3,4,15,20,30,70,80,100};

    int n1=6;
    int n2=5;
    int n3=8;

    commonElement(a1,a2,a3,n1,n2,n3);
    return 0;
}