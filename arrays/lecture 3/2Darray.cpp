#include<iostream>
using namespace std;


int main(){
    //declaring 2D array
    // int arr[4][3];

    //Initialization
    // int arr[3][2]={{10,20},
    //                 {30,40},
    //                 {50,60}};

    int arr[3][2]={10,20,30,40,50,60};  //can declare 2d array like 1d array but not recommended.

    int arr1[3][2]={10,20};  //if we give value to some index then rest will be 0.
    //printing arr1;
    int rowsize=3;
    int colsize=2;

    cout<<"Printing 2-D Array(arr1) : "<<endl;
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout<<arr1[row][col]<<" ";
        }
        cout<<endl;
    }

//IMPORTANT
    // cout<<arr[1][2]<<endl; 
    //2-d array ke index ke hisaab se dekhe toh arr[1][2] exist nahi krta lekin memory me 1-d array ke trh store hota hai or arr[1][2] equal hai arr[2][0] ke kyoki c*i+j ka formula use krne se dono ka index 1-d array me same hi aayega.

    //Printing 2D array -arr[3][2]
    int arrrowsize=3;
    int arrcolsize=2;

    cout<<"Printing 2-D Array(arr) : "<<endl;
    for(int row=0; row<arrrowsize; row++){
        for(int col=0; col<arrcolsize; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    //Converting 2-D aaray index to 1-D array index
    
    cout<<"Converting 2-D array index to 1-D array index :"<<endl;
    for(int row=0; row<rowsize; row++){
        for(int col=0; col<colsize; col++){
            cout<<"arr["<<row<<"]["<<col<<"] == "<<colsize*row+col<<endl;
        }
    }

    return 0;
}