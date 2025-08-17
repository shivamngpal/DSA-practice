#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter side of a square : ";
    cin>>n;

    //outer loop decide karta h ki kitni rows k liye chlna h 
    for(int row =0; row<n; row++){  //outer loop -> n rows ke liye chlta h yeh loop

        //inner loop decide karta h ki harr row me kya print krna h
        for(int col=0; col<n; col++){ //inner loop -> Hr loop me kya krna h wo yeh btayega -> harr row ke liye n stars print honge
            cout<<"* ";
        }
        cout<<endl;     //After printing n stars in a row, we need to move to new line.
    }

    return 0;
}