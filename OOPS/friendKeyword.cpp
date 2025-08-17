#include<iostream>
using namespace std;

class A{
    private:
        int x;
    
    public:
        A(int _x) : x(_x){}

        int getX() const{
            return x;
        }

        void setX(int _val){
            x = _val;
        }

        friend class B;
        friend void print(const A &a);
};

class B{
    public:
        void print(const A&a){
            // cout<<a.getX()<<endl;
            cout<<a.x<<endl;
        }
};
// if i want to access private data members of class A using this fxn then declare this as friend fxn in class A
void print(const A &a){
    cout<<a.x<<endl;
}

int main(){
    A a(5);
    B b;
    b.print(a);
    // now i want to access private members of A w/o using getter and setter
    print(a);
    return 0;
}