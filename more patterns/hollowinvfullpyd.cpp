/*
n : 5
* * * * *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        //spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<n-row; col++){
            if(row==0 || col==0 || col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}