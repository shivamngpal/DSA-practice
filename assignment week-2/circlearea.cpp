#include<iostream>
using namespace std;

float AreaOfCircle(float r){
    float pi = 3.1415;
    float area = pi * r * r;
    return area;
}

int main(){
    float r;
    cout<<"Enter radius : ";
    cin>>r;

    float answer = AreaOfCircle(r);
    cout<<answer<<endl;

    return 0;
}