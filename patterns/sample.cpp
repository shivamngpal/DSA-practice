#include<iostream>
using namespace std;

int main(){
    for(int i=1; i<=3; i++){
        cout<<i<<"->";
        for(int j=1; j<=2; j++){
            cout<<"*";
        }
        cout <<endl;
    }

    return 0;
}