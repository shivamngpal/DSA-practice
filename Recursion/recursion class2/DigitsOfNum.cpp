#include<iostream>
using namespace std;

void digitsOfNum(int n){
    if(n==0)            //base case
        return ;

    digitsOfNum(n/10);  //recursive call

    cout<<n%10<<" ";        //processing
}

int main(){
    int num;
    cin>>num;

    digitsOfNum(num);


    return 0;
}