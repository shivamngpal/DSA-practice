#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        int c = row+1;
        for(int col=0; col<n-row; col++){
            if(row==0 || col==0 || col==n-row-1){
                cout<<c<<" ";
                c++;
            }
            else{
                cout<<"  ";
                c++;
            }
        }
        cout<<endl;
    } 

    return 0;
}