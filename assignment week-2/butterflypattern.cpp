#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
//part 1
//     for(int row=0; row<n; row++){
//         //part 1(A)-stars
//         for(int col=0; col<=row; col++){
//             cout<<"*";
//         }

//         //part 1(B)-spaces
//         for(int col=0; col<2*(n-row-1); col++){
//             cout<<" ";
//         }

//         //part 1(C)-stars
//         for(int col=0; col<=row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }

// //part 2
//     for(int row=0; row<n; row++){
//         //part 2(A)
//         for(int col=0; col<n-row; col++){
//             cout<<"*";
//         }

//         //part 2(B)
//         for(int col=0; col<2*row; col++){
//             cout<<" ";
//         }

//         //part 2(C)
//         for(int col=0; col<n-row; col++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }


    for(int row=0; row<2*n; row++){
        
        int cond = row<n ? row : 2*n-row-1; //row<n means growing phase
        int space_count = row<n ? 2*(n-row-1) : row-cond-1; //cond means hrr row me kitne stars print honge.

        for(int col=0; col<2*n; col++){
            if(col<=cond){
                cout<<"*";
            }
            else if(space_count>0){
                cout<<" ";
                space_count--;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}