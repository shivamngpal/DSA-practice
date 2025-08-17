#include<iostream>
using namespace std;

class Vehicle{
    // Attributes
protected:
    string name;
    string model;
    int noOfTyres;

    

public:
    // getter for name
    string getname(){
        return this->name;
    }

    // ctor
    Vehicle(string _name, string _model, int _noOfTyres){
        cout<<"I am inside Vehicle ctor"<<endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

    // Behavior
    void start_engine(){
        cout<<"Engine is starting "<<name<<" "<<model<<endl;
    }

    void stop_engine(){
        cout<<"Engine is stopping "<<name<<" "<<model<<endl;
    }

    // dtor
    ~Vehicle(){
        cout<<"Vehicle dtor called"<<endl;
    }
};

// if a attribute in base class is init as protected then it will behave like private but it can be inherited by derived class
// Derived class -> synatax - class DerivedClass : AccessModifier ParentClass
class Car : public Vehicle{
    protected:
        int noOfDoors;
        string transmissionType;

    public:
    // ctor
        Car(string _name, string _model, int _noOfTyres, int _noOfDoors,string _transmissionType) : Vehicle(_name, _model, _noOfTyres){
            cout<<"I am inside Car Constructor"<<endl;
            this->noOfDoors = _noOfDoors;
            this->transmissionType = _transmissionType;
        }

    // behavior
        void StartAC(){
            cout<<"AC is starting "<<name<<endl;
        }

    // dtor
    ~Car(){
        cout<<"Car dtor called"<<endl;
    }

};

class Motorcycle : public Vehicle{
    protected:
        string handleBarStyle;
        string suspensionType;

    public:
        // ctor
        Motorcycle(string _name, string _model, int _noOfTyres, string _handleBarStyle, string _suspensionType) : Vehicle(_name, _model, _noOfTyres){
            cout<<"I am inside Motorcycle ctor"<<endl;
            this->handleBarStyle = _handleBarStyle;
            this->suspensionType = _suspensionType;
        }

        // behavior
        void wheelie(){
            cout<<"Wheelie Performed by "<<name<<endl;
        }

        // dtor
        ~Motorcycle(){
            cout<<"Motorcycle dtor called"<<endl;
        }
};


int main(){
    Car A("Maruti","LXI", 4, 4, "Manual");
    A.start_engine();
    A.StartAC();
    A.stop_engine();
    // cout<<A.name<<endl;      //name is inaccessible when it is init as protected in Vehicle class

    cout<<A.getname()<<endl;

    Motorcycle M("Ducati", "XL125", 2, "Standard", "Double");
    M.start_engine();
    M.wheelie();


    return 0;
}