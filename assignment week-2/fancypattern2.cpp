#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

//Growing Phase
    int a =1;
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout<<a;
            a++;
            if(col<row){
                cout<<"*";
            }
        }
        cout<<endl;
    }   //At last 'a' becomes 11.

    int start = a-n;
//Shrinking phase
    for(int row=0; row<n; row++){
        int k = start;
        for(int col=0; col<n-row; col++){
            cout<<k;
            k++;
            if(col<(n-row-1)){
                cout<<"*";
            }
        }
        start = start - (n-row-1);     //before going to next row we are updating start value cause if we give this statement after row loop then it will only be executed when condition in row loop will result to false.
        cout<<endl;
    }

    return 0;
}