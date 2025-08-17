#include <iostream>
using namespace std;

int main(){
    int arr=5;            //arr=5
    cout<<arr<<endl;

    arr+=10;             //arr=arr+10
    cout<<arr<<endl;     //arr = 5+10 =15

    arr*=10;            //arr=arr*10
    cout<<arr<<endl;    //arr= 15*10 = 150

    arr-=50;            //arr=arr-50
    cout<<arr<<endl;    //arr=150-50 = 100

    arr/=10;            //arr=arr/10
    cout<<arr<<endl;    //arr=100/10 = 10

    arr%=10;            //arr=arr%10
    cout<<arr<<endl;    //arr=10%10 = 0


    return 0;
}