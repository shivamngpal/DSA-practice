#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

//GROWING PHASE
    int c = 1;
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout<<c<<" ";
            c++;    //for n=4, r=3, c becomes 11 at last.
            if(col<row){
                cout<<"* ";
            }
        }
        cout<<endl;
    }

//SHRINKING PHASE
    int start = c-n;
    for(int row=0; row<n; row++){
        int k = start;
        for(int col=0; col<n-row; col++){
            cout<<k<<" ";
            k++;

            if(col<n-row-1)
                cout<<"* ";
        }
        start = start - (n-row-1);
        cout<<endl;
    }

    return 0;
}
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n : ";
//     cin>>n;

//     int c=1;
//     for(int row=0; row<2*n; row++){
//         int cond = row<n ? row : (2*n-row-1);
//         int start = c;

//         for(int col=0; col<=cond; col++){
//             cout<<c<<" ";
//             c++;
        
//             // if(row<n){
//             //     cout<<c<<" ";
//             //     c++;
//             // }
//             // else{
//             //     if(col==0){
//             //         c=c-n;
//             //         cout<<c<<" ";
//             //         c++;
//             //     }
//             //     else{
//             //         cout<<c<<" ";
//             //         c++;
//             //     }
//             // }
//         }
//         cout<<endl;
//         if(row>=n-1){
//             c= start;
//         }
//     }

//     return 0;
// }
