#include<iostream>
using namespace std;

// In case of perfect encapsulation, all the attributes and methods will be made private.

// destructor is called when we go out of bound
class Student{
    private:
    // public:
        // Attributes
        int id;
        int age;
        string name;
        int nos;
        // float gpa;

    // private:
        float * gpa;
        string gf;

    public:
        // Getter and Setter
        void setGpa(float a){
            *this->gpa = a;
        }

        void getGpa() const{
            cout<< *this->gpa <<endl;
        }
        //Default constructor -> if we dont write this compiler will make this
        Student(){
            cout<<"Student Default Constructor called"<<endl;
        }

        // Parameterized Constructor
        Student(int id, int age, string name, int nos, float gpa, string gf){
            cout<<"Parameterized Constructor called"<<endl;

            this->id = id;
            this->age = age;
            this->name = name;
            this->nos = nos;
            // this->gpa= gpa;
            this->gpa = new float(gpa);   //agr pointer bna rhe h toh aese value assign krni pdegi or dtos m manually iski memory bhi free krni pdegi
            this->gf = gf;
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

    // private:
        void gfchatting(){
            cout<<this->name<<" is Chatting with GF"<<endl;
        }
};

int main(){
    Student A(1,20,"Ram",5,9.5,"Priya");
    // cout<<A.name<<" "<<A.age<<" "<<A.gpa<<" "<<A.gf<<endl;
    // Showing gpa and gf is inaccessible

    // A.gfchatting();  //can not access this as this method is private

    // cout<<A.gpa<<endl;
    A.setGpa(7.9);
    A.getGpa();

    return 0;
}