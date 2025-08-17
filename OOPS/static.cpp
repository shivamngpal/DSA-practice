#include <iostream>
using namespace std;

// STATIC

class abc{
public:
    static int x,y;     //here static keyword means that same copy of variable will be use for whole class

    static void print(){
        cout<<x<<" "<<y<<endl;
    }
};

// when variables are static, init variables outside the class like this
int abc::x;
int abc::y;

// how compiler differentiate between which value belongs to which object
// like when i write abc obj1 = {1,2}
// i mean to init a object obj1 of abc class with x=1 and y=2
// but how compiler don't mix it with other object
// because when we write obj1.print(), then in print() fxn it gives the pointer to obj1 in parameter which is an internal paramter and not visible to us
// its like this->x and this->y ....'this' is a pointer to particular object 

int main() {
    // abc obj1 = {1,2};  //init x=1 and y=2 for object a of class abc         
    // above line gives error when x and y are static
    abc obj1;
    obj1.x=1;
    obj1.y=2;
    // obj1.print();
    // when fxn is static we can write abc::print() as print() is not for particular instance but for whole class
    // above way also works fine
    abc::print();

    // abc obj2 = {4,5};   //throws error when x and y are static
    abc obj2;
    obj2.x=4;
    obj2.y=5;
    obj1.print();   //here x and y values of obj1 also become 4,5 as abc class shares same copy for static variables
    obj2.print();
    

    return 0;
}