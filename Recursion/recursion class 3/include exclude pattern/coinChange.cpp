// we are given an array coins in which we have different denominations coins
// given an amount which we have to make multiple denomination coins
// return minimum number of coins to make amount ,if possible 
// else return -1, if not possible

#include<iostream>
#include<climits>
using namespace std;

int coinChange(int coins[], int amount, int n){
    if(amount==0)
        return 0;

    if (amount < 0) 
        return -1;

    int MinNumOfCoin = INT_MAX;
    for(int i=0; i<n; i++){
        int coin = coins[i];

        if(coin<=amount){
            int recAns = coinChange(coins,amount-coin,n);
            if(recAns != -1){
                int coinUsed = 1 + recAns;
                MinNumOfCoin = min(MinNumOfCoin,coinUsed);
            }
        }
    }
    return (MinNumOfCoin == INT_MAX) ? -1 : MinNumOfCoin;
}


int main(){
    int coins[]={2,5};
    int n=2;
    int amount = 11;

    // 11 can be made by 11 -> 1s -> 1+1+1+1+1+1+1+1+1+1+1
    // also can be made by five 2s and one 1 -> 2+2+2+2+2+1
    // and by two 5s and one 1 -> 5+5+1

    // but we have to return MINIMUM NUMBER of coins used

    int ans = coinChange(coins,amount,n);
    if(ans == -1)
        cout<<"NOT POSSIBLE"<<endl;
    else
        cout<<"Minimum Number of coins : "<<ans<<endl;

    return 0;
}