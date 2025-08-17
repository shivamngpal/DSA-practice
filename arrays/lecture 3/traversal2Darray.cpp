#include<iostream>
using namespace std;

int main(){
    int arr[3][3]={{10,20,30},
                    {110,120,130},
                    {210,220,230}};

//Row wise traversal
    int rowsize=3;
    int colsize=3;
    cout<<"Row wise Traversal"<<endl;
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

//column wise traversal

    //This method is only for square matrix,i.e., row==col
    cout<<"Column wise Traversal"<<endl;
    // for(int row=0; row<rowsize; row++){
    //     for(int col=0; col<colsize; col++){
    //         cout<<arr[col][row]<<" ";       //[0,0] [1,0] [2,0]
    //     }
    //     cout<<endl;
    // }

    //OR

    //Generalized method
    for(int col=0; col<colsize; col++){
        for(int row=0; row<rowsize; row++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

//Diagonal wise Traversal -> row==col
    cout<<"Diagonal wise Traversal"<<endl;
    // for(int row=0; row<rowsize; row++){
    //     for(int col=0; col<colsize; col++){
    //         if(row==col)
    //             cout<<arr[row][col]<<" ";
    //         else    
    //             cout<<"0"<<" ";
    //     }
    //     cout<<endl;
    // }

    //There is no need of 2 for loops, we can print diagonal matrix in only 1 for loop, so Time complexity=O(n)
    for(int row=0; row<rowsize; row++){
        cout<<arr[row][row]<<" ";
    }

    //reverse diagonal elements
    cout<<endl;
    cout<<"Reverse Diagonal elements"<<endl;
    int i=rowsize-1;
    for(int row=0; row<rowsize; row++){
        cout<<arr[row][i]<<" ";
        i--;
    }
    cout<<endl;
    //using 2 for loops
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            if(row+col==colsize-1){
                cout<<arr[row][col]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}