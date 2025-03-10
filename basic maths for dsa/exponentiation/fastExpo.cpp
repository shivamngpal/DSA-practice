#include<iostream>
using namespace std;


int fastExpo(int a, int b){
    int ans=1;
    while(b>0){
        if(b&1){
            // if odd
            ans=ans*a;
        }
        a=a*a;
        b=b>>1;     //b=b/2

    }
    return ans;
}

// int fastExpo(int a, int b){
//     int ans=1;
//     if(b%2 == 0){
//         for(int i=0; i<(b/2); i++){
//             ans=ans*a;
//         }
//         ans=ans*ans;
//         return ans;
//     }

//     else{
//         for(int i=0; i<(b/2); i++){
//             ans=ans*a;
//         }
//         ans=ans*ans*a;
//         return ans;
//     }
//     return ans;
// }

int main(){
    int a,b;
    cout<<"Enter value of a and b :";
    cin>>a>>b;

    int result = fastExpo(a,b);
    cout<<"Exponentiation of "<<a<<" and "<<b<<" is :"<<result<<endl;

    return 0;
}