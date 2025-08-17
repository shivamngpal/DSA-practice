#include<iostream>
using namespace std;

class abc{
    public:
        int x;
        int *y;

        // ctor
        // default
        abc(int _x, int _y) : x(_x), y(new int(_y)){}

        // default dumb copy ctor
        // copies the same pointer even the address
        abc(const abc &obj){
            this->x = obj.x;
            this->y = obj.y;
        }


        // our smart deep copy ctor
        // abc(const abc &obj){
        //     this->x = obj.x;
        //     this->y = new int(*obj.y);
        // }


        void print() const {
            cout<<"x : "<<x<<"\nPtr y : "<<y<<"\nContent of y : "<<*y<<endl;
        }

        ~abc(){
            delete y;
        }
};


int main(){
// shallow copy is made
// as compiler uses dumb copy ctor
// and it stores the same pointer as 'a'
    // abc a(1,2);
    // a.print();

    // abc b =a;   //copy of a 
    // b.print();
    // *b.y=10;
    // b.print();
    // a.print();


    abc *a = new abc(1,2);
    abc b = *a;

    delete a;
    b.print();
// IMPORTANT---------------------------------------------------
    // here value of y is random value because we delete a and b stores a and then dtor is called so it tries to delete y which is already deleted in case of a and thus there is no value for y.
    // this is beacause dumb ctor is called

    return 0;
}