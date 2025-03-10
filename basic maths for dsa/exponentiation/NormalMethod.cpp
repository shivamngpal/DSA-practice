#include<iostream>
using namespace std;

int NormalExpo(int a, int b){
    int ans=1;
    for(int i=0; i<b; i++){
        ans = ans * a;
    }
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter value of a and b :";
    cin>>a>>b;

    int result = NormalExpo(a,b);
    cout<<"Exponentiation of "<<a<<" and "<<b<<" is :"<<result<<endl;

    return 0;
}