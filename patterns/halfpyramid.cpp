#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //outer loop
    for(int row=0; row<n; row++){
        //inner loop
        for(int col=0; col<row+1; col++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}