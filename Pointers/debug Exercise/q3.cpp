#include<iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= n/2; i++){
        if ((n % i)==0)
            return false;
    }

    return true;
}

int main(){
    int n;
    cin>>n;

    bool ans = isPrime(n);
    cout<<"Is "<<n<<" a prime number? ";
    if(ans==1)
        cout<<"yes"<<endl;
    else    
        cout<<"no"<<endl;

    return 0;
}