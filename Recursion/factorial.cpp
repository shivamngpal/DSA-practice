#include<iostream>
using namespace std;

// FACTORIAL OF A NUMBER USING LOOP
// int factorial(int n){
//     int fact=1;
//     for(int i=n; i>0; i--){
//         fact=fact*i;
//     }
//     return fact;
// }

// FACTORIAL OF A NUMBER USING RECURSION
int factorialRec(int n){
    if(n==1 || n==0)        //base case
        return 1;
    
    // int recursionAns = factorialRec(n-1);    //recursive call
    // int fact = n * recursionAns;             //processing - (optional)

    int fact = n * factorialRec(n-1);   
    return fact;
}

int main(){
    int n;
    cin>>n;

    int ans = factorialRec(n);
    cout<<"Factorial of "<<n<<" is :"<<ans<<endl;

    return 0;
}