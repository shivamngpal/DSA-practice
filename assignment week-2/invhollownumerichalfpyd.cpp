#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        for(int col=row+1; col<=n; col++){
            if(col==row+1 || row ==0 || col==n){
                cout<<col<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}