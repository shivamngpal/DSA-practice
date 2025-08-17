#include<iostream>
using namespace std;

// destructor is called when we go out of bound
class Student{
    public:
        // Attributes
        int id;
        int age;
        string name;
        int nos;
        // float gpa;
        float * gpa;

        //Default constructor -> if we dont write this compiler will make this
        Student(){
            cout<<"Student Default Constructor called"<<endl;
        }

        // Parameterized Constructor
        Student(int id, int age, string name, int nos, float gpa){
            cout<<"Parameterized Constructor called"<<endl;

            this->id = id;
            this->age = age;
            this->name = name;
            this->nos = nos;
            // this->gpa= gpa;
            this->gpa = new float(gpa);   //agr pointer bna rhe h toh aese value assign krni pdegi or dtos m manually iski memory bhi free krni pdegi
        }

        // Copy Constructor
        Student(const Student &srcobj){
            cout<<"Copy Constructor Called"<<endl;
            this->id = srcobj.id;
            this->age = srcobj.age;
            this->name = srcobj.name;
            this->nos = srcobj.nos;
        }

        // Behavior
        void study(){
            cout<< this->name <<"Studying"<<endl;   //this pointer pointing to name of instance of a Student class
        }

        void sleep(){
            cout<< this->name <<"Sleeping"<<endl;   //this pointer pointing to name of instance of a Student class
        }

        void bunk(){
            cout<< this->name <<"Bunking"<<endl;   //this pointer pointing to name of instance of a Student class
        }

        // destructor -> default always 
        // constructor may or may not be default
        ~Student(){
            cout<<"Student Default Destructor called"<<endl;
            delete this->gpa;
        }
};

int main(){
// for default constructor
    // Student A;
    // A.id=1;
    // A.age=15;
    // A.name = "Ram";
    // A.nos = 6;

    // A.study();

    // Student B;
    // B.id=2;
    // B.age=20;
    // B.name = "Shyam";
    // B.nos = 5;

    // B.bunk();

// for parameterized constructor
//     Student A(1,20,"Ram",6);     //A is allocated on Stack memory of system
//     A.study();
//     Student B(2,15,"Shyam",5);  //parameterized ctos

// //copy ctos
//     Student C(A);


    // cout<<A.name<<" "<<B.name<<" "<<C.name<<endl;

    // Dynamic Memory Allocation
    Student *A = new Student(1,20,"Ram",5,9.5); //here we will have to free memory manually....dtos is not called by default
    cout<< A->name <<endl;
    cout<< A->age <<endl;
    cout<< *(A->gpa) <<endl;

    A->study();

    delete A;

    return 0;
}