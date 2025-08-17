#include<iostream>
#include<vector>
using namespace std;

int main(){
    //creating 2D vector
    vector<vector<int>> arr(3,vector<int>(4,0));    //2D vector having 3 rows and 4 columns and init with 0
    // int totalRows = arr.size();
    // int totalCols = arr[0].size();

    // finding no. of rows
    cout<<"No. of Rows : "<<arr.size()<<endl;

    // finding no. of columns 
    cout<<"No. of Columns : "<<arr[0].size()<<endl;

//Creating Jagged Array - 2D Array having different number of Columns in each row
    vector<vector<int>> brr(4);     //2D vector of 4 rows
    brr[0] = vector<int> (5,0);
    brr[1] = vector<int> (2);
    brr[2] = vector<int> (3);
    brr[3] = vector<int> (6);

    cout<<"Printing no. of rows in brr : "<<brr.size()<<endl;
    
    cout<<"Printing no. of columns : "<<endl;
    for(size_t i=0; i<(brr.size()); i++){   //here size_t is used because it was giving warning that comparison between signed and unsigned integer expressions and int i is a signed int and brr.size() is an unsigned int........so to fix this problem we use size_t which is an unsigned int and we can compare unsigned int with another unsigned int.
        cout<<brr[i].size()<<endl;
    }








    return 0;
}