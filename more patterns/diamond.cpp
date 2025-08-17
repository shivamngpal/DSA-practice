/*
n : 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    *
*/
#include<iostream>
using namespace std;

void fullpyramid(int n){
    for(int row=0; row<n; row++){   //run for n rows

        //1.spaces
        for(int col=0; col<n-row-1; col++){ //print spaces
            cout<<" ";
        }

        //2.stars
        for(int col=0; col<row+1; col++){   //print stars
            cout<<"* ";
        }
        cout<<endl;
    }  
}

void invfullpyramid(int n){
    for(int row=0; row<n; row++){
        //spaces
        for(int col=0; col<row; col++){
            cout<<" ";
        }
        for(int col=0; col<n-row; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
//Diamond pattern = full pyramid pattern + Inverted full pyramid
    fullpyramid(n);
    invfullpyramid(n);

    return 0;
}