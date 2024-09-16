#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<(2*n-1); row++){
        int cond = row<n ? row : (2*n - row -2);    //2n-row-2 ki condition isliye hai kyoki col<=cond hai toh agr uss expression ko evaluate karenge toh hame 0 so le kar evaluated expression tak chlna hai (including that expression value).
        for(int col=0; col<=cond; col++){
            cout<<"* "; 
        }
        cout<<endl;
    }

    return 0;
}