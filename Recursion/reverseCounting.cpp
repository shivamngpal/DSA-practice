#include<iostream>
using namespace std;

void reverseCountRecursion(int n){
    if(n==0){               //base case
        return ;
    }
    cout<<n<<" ";               //processing
    reverseCountRecursion(n-1); //recursive call
}

int main(){
    int n;
    cin>>n;

    reverseCountRecursion(n);


    return 0;
}