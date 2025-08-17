#include<iostream>
using namespace std;

// int power(int n){
//     if(n==0)
//         return 1;

//     int powerAns = 2 * power(n-1);
//     return powerAns;
// }



// power with 2 arguments
int power(int a, int b){
    if(b==0 )
        return 1;
    
    int powAns = a * power(a, b-1);
    return powAns;
}

int main(){
    int a,b;
    cin>>a>>b;

    int ans = power(a,b);
    cout<<a<<" to the power "<<b<<" is :"<<ans<<endl;

    return 0;
}