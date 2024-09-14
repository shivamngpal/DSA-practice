#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    
    for(int row=0; row<n; row++){
        //Part-1
        for(int col=0; col<(2*n-2-row); col++){
            cout<<"*";
        }
        //Part-2
        for(int col=0; col<(2*row+1); col++){
            if(col%2==0){
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
        }
        //Part-3
        for(int col=0; col<(2*n-2-row); col++){
            cout<<"*";
        }
        cout<<endl;
        
    }

    return 0;
}