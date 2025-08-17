//print prime number from 1 to n
#include<iostream>
using namespace std;

bool CheckPrime(int n){
    for(int i=2; i<n ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;    
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int j=1; j<=n; j++){
        if(CheckPrime(j)==true){
            cout<<j<<endl;
        }
    }

    return 0;
}