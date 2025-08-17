#include<iostream>
using namespace std;

void KmToMiles(double km){
    double onemile = 0.621371;
    double conv = km * onemile;
    cout<<conv<<" miles"<<endl;
}

int main(){
    double km;
    cout<<"Enter Km : ";
    cin>>km;

    KmToMiles(km);

    return 0;
}