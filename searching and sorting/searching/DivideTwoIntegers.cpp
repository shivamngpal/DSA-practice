#include<iostream>
#include<vector>

using namespace std;

int FindQuotient(int dividend, int divisor){
    int s=0;
    int e=dividend;
    int ans=-1;
    int prod=0;

    if(divisor==0)
        return -1;

    while(s<=e){
        int mid=s+((e-s)>>1);
        for(int i=0;i<divisor;i++){
            prod+=mid;
        }
        if(prod<=dividend){
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
    int dividend,divisor;
    cin>>dividend>>divisor;
    int result=FindQuotient(abs(dividend),abs(divisor));
    if(((dividend<0) && (divisor>0)) || ((dividend>0) && (divisor<0))){
        result=-result;
    }
    (result==-1) ? cout<<"Division by Zero"<<endl : cout<<result<<endl;



    return 0;
}