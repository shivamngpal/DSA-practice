#include<iostream>
using namespace std;

// ctor made private when we don't want to make instance directly

class Box{
    int width;

    // ctor -> private
    Box(int _w) : width(_w){}

    public:
        int getWidth() const{
            return width;
        }

        void setWidth(int _val){
            width = _val;
        }
        friend class BoxFactory;
};

class BoxFactory{
    int count;

    public:
        Box getABox(int _w){
            ++count;
            return Box(_w);
        }
};

int main(){
    // program is compiled with no error but when we try to create an object of Box class then it throws error
    // Box b; //gives error as const is private

    BoxFactory bfact;
    Box b = bfact.getABox(5);
    cout<<b.getWidth()<<endl;

    return 0;
}