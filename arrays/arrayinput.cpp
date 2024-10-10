#include<iostream>
using namespace std;

int main(){
    int arr[10];    //Array declaration of size 10.

    //Taking input from user in array
    for(int i=0; i<5; i++){
        cout<<"Enter element at index "<<i<<" :"<<endl;
        // cin>>arr[i];    //Here we either write arr[i] or i[arr] they both works the same. In memory both are processed using Derefernce operator(*), arr[i] means *(arr+i) and i[arr] means *(i+arr) where * -> Derefernce operator means Value present at particular address. For more refernce follow notes. 
        cin>>i[arr];    //Works same as arr[i].
    }

    //printing array elements;
    cout<<"Elements in array are : [";
    for(int p=0; p<5; p++){
        if(p==4){
            cout<<arr[p]<<" ";
        }
        else{
            cout<<arr[p]<<",";
        }
    }
    cout<<"]"<<endl;

    return 0;
}