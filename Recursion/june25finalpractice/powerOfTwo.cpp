#include<iostream>
using namespace std;

int powerOfTwo(int n){
    // base case
    if(n==0)
        return 1;
    if(n==1)
        return 2;

    int powTwo = 2 * (powerOfTwo(n-1));
    return powTwo;
}

int main(){
    int power;
    cout<<"Enter a number to calculate power of 2 of that number: ";
    cin>>power;

    int ans=1;
    for(int i=1; i<=power; i++){
        ans*=2;
    }
    cout<<"2 raised to "<<power<<" is :"<<ans<<endl;

    // cout<<"2 raised to "<<power<<" is :" <<powerOfTwo(power)<<endl;
    return 0;
}