// polymorphism means multiple forms
// in cpp, we have 2 types of pm - 1. Compile Time /static polymorphism  2.RunTime/Dynamic pm

// here we are implementing static pm

#include<iostream>
using namespace std;

//  FUNCTION OVERLOADING
// class Add{
//     int x,y;
//     public:
//         // Add(int x, int y){
//         //     this->x=x;
//         //     this->y=y;        
//         // }

//         int sum(int x, int y){
//             return x+y;
//         }

//         double sum(double x, double y){
//             return x+y;
//         }

//         int sum(int x, int y, int z){
//             return x+y+z;
//         }
// };

// ------------------------------------------------------
// OPERATOR OVERLOADING

class Complex{
    public:
        int real;
        int imag;

        // ctor
        // default
        Complex(){
            real = imag = -1;
        }

        // parameterized
        // initialisation list -> syntax -> classname(parameters) : attribute1(value1),attribute2(value2);
        Complex(int r, int i) : real(r), imag(i){}; //init value of real and imag using initialisation list

        // operator overloading 
        // syntax -> returnType operator <op>(parameters){}
        Complex operator + (const Complex &B){
            // this pointer points to instance of object A
            Complex temp;
            temp.real = this->real + B.real;
            temp.imag = this->imag + B.imag;
            return temp;
        }

        // check if equal?
        bool operator ==(const Complex &B){
            return (this->real == B.real) && (this->imag == B.imag);
        }

        // behavior
        void print(){
            printf("[%d + %di]\n", this->real , this->imag);
        }

};

int main(){
    // Add A;
    // int ans = A.sum(5,3);
    // cout<<ans<<endl;

    // Add B;
    // double ansDouble = B.sum(5.4,9.4);
    // cout<<ansDouble<<endl;

    // Add C;
    // int ansThreePara = C.sum(5,9,4);
    // cout<<ansThreePara<<endl;
// ------------------------------------------------
    // operator overloading
// ------------------------------------------------
    Complex D;  //default ctor
    D.print();
    Complex A(3,6);
    A.print();
    Complex B(3,6);
    B.print();

    Complex C = A + B;  //here + operator is defined in Complex class
    C.print();

    bool a = A==B;
    (a==1) ? cout<<"Equal"<<endl : cout<<"Not equal"<<endl;

    // adding 2 complex numbers -> operator overloading
    // vs code knows to add 2 integers,floats,doubles etc.
    // but it doesn't know to add two complex number
    // so we are going to define + operator for complex numbers
    // therefore, + will have many forms-> so it is static polymorphism

    return 0;
}