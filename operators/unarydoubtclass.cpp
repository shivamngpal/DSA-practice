#include <iostream>
using namespace std;



int main(){
    //COMPILER DEPENDENT - This code is Ambiguos code.
    // int a=10;
    // int ans = (++a) * (++a); 
    
    //This is compiler dependent
    //Ek complier phle a=10 ko store karta h fir phla ++a aata h toh a=11 hogya and 2nd ++a k liye a=12 hogya 
    //So, ans =11*12 =132
    //But i am getting ans = 144 because this compiler is using the most recent value of a,i.e., 12.
    //It is multiplying 12 * 12 = 144.
    
    // cout<<ans<<endl;


    //Legal way -> NOT AMBIGUOUS
    int a=10;
    int b=(++a);
    int c=(++a);
    int ans = b*c ;
    cout<<ans<<endl;

    return 0;
}