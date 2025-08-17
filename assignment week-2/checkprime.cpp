#include<iostream>
#include<cmath>
using namespace std;

//One of the factor of a non-prime number will definitely be less than or equal to square root of that number.
//so we can use more optimal approach,i.e., dividing n from 2 to sqaure root of n. This statement decreases the testing number hence more optimal approach.
bool CheckPrime(int n){
    for(int i=2; /* i<n */ i<=sqrt(n); i++){
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

    bool prime = CheckPrime(n);

    if(n<0){
        cout<<"Not a Valid Number"<<endl;
    }
    else{
        if(prime){
            cout<<n<<" is a prime number"<<endl;
        }
        else{
            cout<<n<<" is not a prime number"<<endl;
        }
    }

    return 0;
}