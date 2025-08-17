#include <iostream>
using namespace std;

/*Explanation->
* * * * *       | row   __ Column
*       *
* * * * *
---------------
Total no of rows =3
Observation => 
R0 -> 5*
R1 -> 1* 3spaces 1*
R2 -> 5*
---------------
So, first column , first row, last column, last row have stars else spaces.


In Zero-based numbering, last element will always be n-1(If there are total n elements)
eg. 0,1,2,3,4,5,...........,n-1
eg for 10 elements, 0,1,2,3,4,5,6,7,8,9 (These are total 10 elements and last element is 10-1 =9).
*/

int main(){
    int len, breadth;   //len -> left to right  && breadth -> top to bottom
    cout<<"Enter the length and breadth of a Rectangle : ";
    cin>>len>>breadth;

    for(int row=0; row<breadth; row++){     //bertical check
        for(int col=0; col<len; col++){     //horizontal check
            if(row==0 || col==0 || row==breadth-1 || col==len-1){   //Agr first row ya first column ya last row ya last column h toh * print kardo.
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }


    return 0;
}