/*HOMEWORK
1. fxn to print counting from 1 to 100
2. to find simple interest
3. to print prime numbers from 1 to 100
4. check whether someone is eligible for voting or not.
5. SIP Calculator
*/

/*Prime Number -
One Factor is Always Smaller or Equal to the Square Root:

If you consider any composite number, one of its factors will always be less than or equal to its square root, and the other factor will be greater than or equal to the square root.
For example, for 36, factors are (6, 6), and for 30, factors are (5, 6). In both cases, one of the factors is smaller than or equal to √36 (which is 6) or √30 (which is approximately 5.48).
In general, if you don't find any factors up to the square root of a number, you won't find any after it either, because if there were a factor greater than the square root, its pair would have already been smaller than the square root and found during the earlier iterations.
*/

#include <iostream>
#include <math.h>
using namespace std;

void printCounting(){
    for(int i=1; i<=100; i++){
        cout<<i<<endl;
    }
}

int simpleInterest(int P, int R, int T){
    int SI = (P*R*T)/100;
    return SI;
}

bool isPrime(int num){
    if(num<=1){
        return false;
    }
    else{
        for (int i=2; i*i<=num; i++){
            if(num%i == 0){
                return false;
            }
        }
        return true;
    }
}
void primeNumber(){
    for(int i=1; i<=100; i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }

    }
    
}

void eligibleForVoting(int age){
    if(age>=18){
        cout<<"Eligible for Voting "<<endl;
    }
    else{
        cout<<"Not elegible for Voting"<<endl;
    }
}

double SIPCalculator(double P, double i, int n){
    double r =i/12/100;
    double FV = P * (pow(1+r, n)-1)/ r*(1+r);
    return FV;
}

int main(){
    // printCounting();

    // int SIcalc = simpleInterest(2000,1,10);
    // cout<<SIcalc<<endl;
    // primeNumber();

    // eligibleForVoting(10);
    // eligibleForVoting(18);
    // eligibleForVoting(59);

    double SIPresult = SIPCalculator(350, 5 ,12);
    cout<<SIPresult<<endl;




    return 0;
}