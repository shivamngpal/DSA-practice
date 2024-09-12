/*
n : 5

1 
2 * 2 
3 * 3 * 3 
4 * 4 * 4 * 4 
5 * 5 * 5 * 5 * 5 
4 * 4 * 4 * 4 
3 * 3 * 3 
2 * 2 
1 

*/
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //PART-01
    for(int row=0; row<n; row++){
        for(int col=0; col<(2*row+1); col++){
            if(col%2==0){
                cout<<row+1<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }

    //PART-02
    n--;
    for(int row=0; row<n; row++){
        for(int col=0; col<(2*n-2*row-1); col++){
            if(col%2==0){
                cout<<n-row<<" ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }


    return 0;
}