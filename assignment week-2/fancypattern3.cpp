
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<n; row++){
        int cond = row <= n/2 ? 2*row : 2*(n-row-1); //cond variable kehta hai ki agr row ki value n/2 hogi toh tb tk col hmare 2*row times print honge vrna 0 times.We have used ternary operator here.
        for(int col=0; col<=cond; col++){
            if(col<=cond/2){
                if(col==0){
                    cout<<"*"<<col+1;
                }
                else{
                    cout<<col+1;
                }
                
            }
            else{
                if(col==2*row || col==2*(n-row-1)){
                    cout<<cond-col+1<<"*";
                }
                else{
                    cout<<cond-col+1;
                }
            }
        }
        cout<<endl;
    }
    return 0;
}