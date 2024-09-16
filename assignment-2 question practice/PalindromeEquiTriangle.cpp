#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        int c=1;
        //spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }

        //pattern
        for(int col=0; col<(2*row+1); col++){
            if(col<=row){
                cout<<c;
                c++;
            }
            else if(col==row+1){
                c=c-2;
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }

        }
        cout<<endl;
    }


    return 0;
}