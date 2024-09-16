#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int row=0; row<2*n; row++){
        int cond = row<n ? row : 2*n-row-1; //cond variable bta rha h kitne * print honge hrr row me.
        int spaces = row<n ? 2*(n-cond-1) : row-cond-1;  //else m cond mtlb kitne stars print ho rhe h hrr row m.
        for(int col=0; col<2*n; col++){
            if(col<=cond){
                cout<<"* ";
            }
            else if(spaces>0){
                cout<<"  ";
                spaces--;
            }

            else
                cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}