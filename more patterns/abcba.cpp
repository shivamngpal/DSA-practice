/*
n : 5
A 
A B A 
A B C B A 
A B C D C B A 
A B C D E D C B A 
*/
#include<iostream>
using namespace std;

/*
Using part-1, this pattern is implemented.
Ab hme pura pattern print krwana hai toh phle part-1 me hm ch++ kar rhe h toh hrr row me ch ki value jo print hui h usse ek jyada ho jaati h toh phle part-2 me usse ch-- kiya and fir while loop lgaya jbtk ch>'A' hoga or ussme hmne ek or baar ch-- kiya kyoki wo jruri h pattern print karwane k liye or fir ch print kar diya.
A 
A B 
A B C 
A B C D 
A B C D E
*/

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    //part-1
    for(int row=0; row<n; row++){
        char ch = 'A';
        for(int col=0; col<row+1; col++){
            cout<<ch<<" ";
            ch++;
        }

        //part-2
        ch--;
        while(ch>'A'){
            ch--;
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    return 0;
}