#include<iostream>
using namespace std;

// MACROS
// defining a variable 
#define PI 3.14159      //defining variable -> its a preprocessor directive -> means before compilation, preprocessor changes word PI (wherever written in program) with the value we defined

// defining a function
#define MAXX(x,y) (x>y ? x : y)

float circleArea(float r){
    return PI * r * r;
}

float CirclePerimeter(int r){
    return 2 * PI * r;
}

int greaterVal(int x, int y){
    int gVal = MAXX(x,y);
    return gVal;
}


int main(){
    float r=8;
    float ans = circleArea(r);
    cout<<ans<<endl;

    int maxAns = greaterVal(10,13);
    cout<<maxAns<<endl;

    return 0;
}