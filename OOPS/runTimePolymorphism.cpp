#include<iostream>
using namespace std;

// final keyword can either be used with classes or virtual member function
// jo bhi cheez final hogi, wo inherit ya override ni ho skti

class Shape{
    public:
        virtual void draw(){    //w/o virtual keyword, compiler early binds this code and calls base class object for everything
            cout<<"Generic Drawing"<<endl;
        }
};

class Circle : public Shape{
    public:
        void draw() override{   //when i use final keyword, it throws error because draw() method in parent class is final and can't be overrided.
            cout<<"Circle Drawing"<<endl;
        }
};

class Rectangle : public Shape{
    public:
        void draw() override{
            cout<<"Rectangle Drawing"<<endl;
        }
};

class Triangle : public Shape{
    public:
        void draw() override{
            cout<<"Triangle Drawing"<<endl;
        }
};

void ShapeDraw(Shape *s){
    s->draw();
}

int main(){
    Shape *s = new Shape();
    ShapeDraw(s);
    Circle c;
    ShapeDraw(&c);

    // upcasting
    Shape *s2 = new Circle();
    ShapeDraw(s2);

    // downcasting
    Shape *s3 = new Shape();
    Circle *c1 = (Circle *)s3;
    ShapeDraw(c1);

    return 0;
}