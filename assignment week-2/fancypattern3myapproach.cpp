//Good Work
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //Growing Phase
    for(int row=0; row<n; row++){
        int c=1;
        for(int col=0; col<(2*row+1); col++){
            if(col==0 || col==2*row){
                cout<<"*";
            }
            else if(col<=row){
                cout<<c;
                c++;            //lets say we have to print *121* in a row so after printing 1,2 now c becomes 3 but we don't want to print 3 we have to print 1 so we give condition that is col==row+1 then decrease value of c by 2 then print c and again decrease the value of c for next element.
            }
            else if(col==row+1){
                c=c-2;  //Please read above comment for clarity -> c becomes 3 but we have to print 1 then 3-2=1
                cout<<c;
                c--;
            }
            else{
                cout<<c;
                c--;
            }
        }
        cout<<endl;
    }

    //Shrinking Phase
    n--;
    for(int row=0; row<n; row++){
        int p=1;
        for(int col=0; col<=2*(n-row-1); col++){
            if(col==0 || col==2*(n-row-1)){
                cout<<"*";
            }
            else if(col<n-row){
                cout<<p;
                p++;
            }
            else if(col==n-row){
                p=p-2;
                cout<<p;
                p--;
            }
            else{
                cout<<p;
                p--;
            }
            
        }
        cout<<endl;

    }

    return 0;
}