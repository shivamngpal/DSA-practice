#include<iostream>
#include<vector>

using namespace std;

int FindQuotient(int dividend, int divisor){
    int s=0;
    int e=dividend;
    int ans=-1;
    // bool isNeg = (dividend<0) ^ (divisor<0);    //either of dividend and divisor is 0

    if(divisor==0){
        cout<<"Division by zero is not possible"<<endl;
        return -1;
    }

    while(s<=e){
        int mid = s+((e-s)>>1); //right shift means divide by 2
        int formula = divisor*mid;
        
        if(formula==dividend){
            return mid;
        }

        else if(formula<=dividend){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}

int main(){
    int dividend, divisor;
    cout<<"Enter Dividend and Divisor : ";
    cin>>dividend>>divisor;

    int res = FindQuotient(abs(dividend),abs(divisor));
    if((dividend<0) && (divisor>0) || (dividend>0) && (divisor<0)){
        res=-res;
    }
    cout<<"Quotient : "<<res<<endl;

    return 0;
}