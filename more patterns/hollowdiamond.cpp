/*
n : 5
    * 
   * * 
  *   * 
 *     *
*       *
*       *
 *     *
  *   *
   * *
    *
*/
#include<iostream>
using namespace std;

void hollowfullpyramid(int n){
    for(int row=0; row<n; row++){
        //spaces
        for(int col=0; col<n-row-1; col++){
            cout<<" ";
        }
        for(int col=0; col<row+1; col++){
            if (col==0 || col==row  /*|| row==n-1*/){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

void hollowinvfullpyramid(int n){
    for(int row=0; row<n; row++){
        //spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        //stars
        for(int col=0; col<n-row; col++){
            if(/*row==0 ||*/  col==0 || col==n-row-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    hollowfullpyramid(n);
    hollowinvfullpyramid(n);

    return 0;
}