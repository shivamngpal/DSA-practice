#include<iostream>
using namespace std;

class abc{
    // unn fxn ko CONST bnao jissme value change ni hogi
public:
    // attributes
    // mutable int x;  //x is mutable which means it's value can be changed in const function
    int x;
    int *y;
    int z;

    // ctor
    abc(){  //default ctor
        x=0;
        y = new int(0);
        z=0;
    }

    // paramterized ctor
    abc(int _x, int _y, int _z=0){          //here int _z=0 is the default argument
        x=_x;
        y = new int (_y);
        z=_z;
    }

    // behavior
    int getX() const{   //this member fxn is now const and if we try to change value of x through it, it will throw an error
        // x=10;   //throws an error
        return x;
    }

    int getY() const {
        return *y;
    }

    void setX(int _valx){
        x=_valx;
    }

    void setY(int _valy){
        x=_valy;
    }

    int getZ() const{
        return z;
    }

    // dtor
    ~abc(){
        delete y;
        cout<<"Dtor called"<<endl;
    }
};

void printVal(const abc &a){
    cout<<a.getX()<<" "<<a.getY()<<" "<<a.getZ()<<endl;
}

int main(){
    abc a(1,2,4);
    printVal(a);
    // int xval = a.getX();
    // cout<<xval<<endl;

    // int yval = a.getY();
    // cout<<yval<<endl;
}

int main2(){
    // const int x=5;
    // // x=10;   // giving error that expression must be a modifiable value
    // cout<<x<<endl;


// -------------------------------------------------------------------------
    // way to change const value - WORKS ONLY FOR OLD COMPILERS OF C++ OR C
    // const int x=10;
    // int *p = &x;
    // *p = 30;    
    // cout<<*p<<endl; 
 // -------------------------------------------------------------------------   
// const with pointers

    // 1. CONST DATA, NON CONST POINTER
    // if we write CONST before * (asterisk), then the data will be const, pointer will bw non-const

    // const int *a = new int(2);  //CONST data, NON-CONST pointer 
    // // int const *a = new int(2);  //same as above line
    // // *a=20;  //cant change value as data is const but we can reassign pointer to another variable
    // cout<<*a<<endl;
    // int b=20;
    // a=&b;
    // cout<<*a<<endl;

    // 2. CONST POINTER, NON CONST DATA
    // IF WE WRITE CONST AFTER *, THEN POINTER IS CONST AND DATA IS NON CONST

    // int *const a = new int(2);  //const pointer and non const data
    // cout<<*a<<endl;
    // *a=20;  //value change ho jayegi but pointer reassign ni hoga
    // // int b=30;
    // // a=&b;   //gives error
    // cout<<*a<<endl;

    // 3. CONST DATA, CONST POINTER
    // IF WE WRITE CONST BEFORE AND AFTER * THEN BOTH DATA AND POINTER WILL BE CONST
    // const int *const a = new int(2);
    // cout<<*a<<endl;
 
// -------------------------------------------------------------------------   

    return 0;
}