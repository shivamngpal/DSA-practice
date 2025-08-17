#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        //stars
        for(int col=0; col<(2*n-row-2); col++){
            cout<<"*";
        }
        //pattern
        for(int col=0; col<(2*row+1); col++){
            if(col%2==0)
                cout<<row+1;
            else
                cout<<"*";
        }
        //stars
        for(int col=0; col<(2*n-row-2); col++){
            cout<<"*";
        }

        cout<<endl;
    }

    return 0;
}