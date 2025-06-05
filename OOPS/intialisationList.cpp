#include<iostream>
using namespace std;

class abc{
public:
    int x;
    int *y;
    int z;

    // ctor
    // this way gives error if any variable is const and we try to change it;
    // abc(int _x, int _y, int _z=0){          //here int _z=0 is the default argument
    //     x=_x;
    //     y = new int (_y);
    //     z=_z;
    // }

    abc(int _x, int _y, int _z=0) : x(_x), y(new int(_y)), z(_z){} //initialisation List
    // agr koi const h toh old way se agr value assign krenge toh error aayega but init list me ni aata
    
};

int main(){

    return 0;
}