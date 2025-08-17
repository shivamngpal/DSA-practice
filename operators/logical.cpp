#include <iostream>
using namespace std;

int main(){
    bool cond1 = 1; //1 means true in bool && 0 means false
    bool cond2 = false; 
    bool cond3 = (10>5); //10>5 is true

//LOGICAL AND operator -> && (if all inputs are true then only output is true)
    // if(cond1 && cond2 && cond3){
    //     cout<<"All conditions are true"<<endl;
    // }
    // else{
    //     cout<<"Atleast one condition is not true."<<endl;
    // }

//LOGICAL OR operator -> || (if any of input is true then output is true else false)
    // if(cond1 || cond2 || cond3 ){
    //     cout<<"Altleast one condition is true"<<endl;
    // }
    // else{
    //     cout<<"None condition is true"<<endl;
    // }

//LOGICAL NOT operator -> ! (if input is true then output is false && vice-versa)
    cout<< !(cond1)<<endl;   //as cond1=1 then output will be 0.
    cout<< !(cond2)<<endl;
    cout<< !(cond3)<<endl;





    return 0;
}