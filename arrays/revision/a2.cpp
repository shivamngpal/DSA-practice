#include<iostream>
#include<math.h>
using namespace std;

int main(){
    for(int i=2; i<=100; i++){
        int num=i;
        int flag=0;
        for(int j=2; j<=sqrt(i); j++){
            if(num!=j && num%j==0){
                flag=1;
                break;
            }
        }
        if(flag==1)
            continue;
        else
            cout<<num<<endl;
    }
    return 0;
}