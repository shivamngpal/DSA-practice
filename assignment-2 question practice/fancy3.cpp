#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        int c=1;
        for(int col=0; col<(2*row+1); col++){
            if(col==0 || col==2*row){
                cout<<"* ";
            }
            else{
                if(col<=row){
                    cout<<c<<" ";
                    c++;
                }
                else if(col==row+1){
                    c=c-2;
                    cout<<c<<" ";
                    c--;
                }
                else{
                    cout<<c<<" ";
                    c--;
                }
            }
        }
        cout<<endl;
    }

    n--;
    for(int row=0; row<n; row++){
        int a=1;
        for(int col=0; col<=(2*(n-row-1)); col++){
            if(col==0 || col==2*(n-row-1))
                cout<<"* ";
            else{
                if(col<=(n-row-1)){
                    cout<<a<<" ";
                    a++;
                }
                else if(col==n-row){
                    a=a-2;
                    cout<<a<<" ";
                    a--;
                }
                else{
                    cout<<a<<" ";
                    a--;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}