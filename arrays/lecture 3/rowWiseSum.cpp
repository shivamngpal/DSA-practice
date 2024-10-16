#include<iostream>
#include<vector>

using namespace std;

void RowWiseSum(vector<vector<int>> arr){
    int rowsize=arr.size();
    int colsize=arr[0].size();
    int a[rowsize];
    
    for(int i=0; i<rowsize; i++){
        //hrr row ke liye sum starting me 0 hoga
        int sum=0;
        for(int j=0; j<colsize; j++){
            sum=sum+arr[i][j];
        }
        a[i]=sum;   //sirf cout<<sum<<endl; likhe bhi sum print kar skte hai
    }

//Not needed if we write cout<<sum; above.
    //printing row wise sum
    cout<<"Row wise Sum of Vector"<<endl;
    for(int i=0; i<rowsize; i++){
        cout<<a[i]<<" ";
    }
}

int main(){
    vector<vector<int>> arr(3,vector<int>(3));
    int rowsize=arr.size();
    int colsize = arr[0].size();

    //input in vector
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout<<"Enter value at index :"<<i<<","<<j<<" : ";
            cin>>arr[i][j];
        }
    }

    RowWiseSum(arr);

    return 0;
}