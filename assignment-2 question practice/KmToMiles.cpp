#include<iostream>
using namespace std;

float KmToMiles(float km){
    float one_mile = 0.621371;
    float ans = km * one_mile;

    return ans;
}

int main(){
    float n;
    cout<<"Enter km : ";
    cin>>n;

    float result = KmToMiles(n);
    cout<<"Miles in "<<n<<" Kms : "<<result<<endl;

    return 0;
}