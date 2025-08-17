#include <iostream>
using namespace std;

int factNum(int n){
    // base case
    if(n==0 || n==1)
        return 1;

    int ans = n*factNum(n-1);
    return ans;
}

int main(){
    int n;
    cin>>n;
    while(n<0){
        cout<<"Enter a positive integer :";
        cin>>n;
    }
    int fact = factNum(n);
    cout<<"Factorial of "<<n<<" is : "<<fact<<endl;

    return 0;
}