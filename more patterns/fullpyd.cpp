/*
n : 5
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
*/
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

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

    return 0;
}