#include<iostream>
using namespace std;
//set bit mtlb jo bit 1 hai.
int CountSetBits(int n){
    int num=0, place=1, count=0;
    while(n>0){
        int bit = n % 2;
        if(bit==1){
            count++;
        }
        num = num + bit*place;   // -> No need of this line as we only want to count set bits not to print binary number representation.
        n=n/2;
        place=place*10;
    }
    return num;
    return count;
}

int bitwiseCountSetBit(int n){
    int count =0;
    while(n>0){
        int bit = n&1;  //gives LSB of bimary representation of n.
        if(bit==1){
            count++;
        }
        n=n>>1; //divide by 2
    }
    return count;
}

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    // int setbit = CountSetBits(n);

    int bitwiseCount = bitwiseCountSetBit(n);
    cout<<"No. of Set bits in "<<n<<": "<<bitwiseCount<<endl;

    return 0;
}