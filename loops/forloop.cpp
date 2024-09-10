#include<iostream>
using namespace std;

int main(){

    //Syntax of FOR LOOP - for(intialization; condition; Updation) { //body of the loop// }
    // for(int i=1; i<=10; i++){
    //     cout<<"Program of FOR LOOP"<<i<<endl;
    // }


    // for (int i=10; i<70; i++){
    //     cout<<i<<endl;
    // }
 //-----------------------------------------
 //use of break keyword
    // for(int i=1; i<=10; i++){
    //     cout<<i<<endl;

    //     if(i==5){     //agr i ki value 5 hoti h toh break krke loop se bahar nikal jao
    //         break;
    //     }
        
    // }

//------------------------------------------
//use of continue keyword
    // for (int i=1; i<=5; i++){
    //     if(i==3){
    //         continue;      //skips one iteration, i.e, when i=3 it is skipped and 1,2,4,5 is printed.
    //     }
    //     cout<<i<<endl;
    // }

//------------------------------------------
//if semicolon ; is used in for loop
    for(int i=0; i<=10; i++);        //This becomes a null body or empty body loop
    // {
        // cout<<i<<endl;            //i is undefined here as we have closed for loop by using semicolon after it.
    // }
    
    return 0;

}