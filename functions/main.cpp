#include <iostream>
using namespace std;

void printCounting(){
    for(int i=1; i<=5; i++){
        cout<<i<<endl;
    }
}

int sum(int a, int b){
    int totalSum = a + b;
    return totalSum;
}

int getMultiplication(int x, int y, int z){
    int result = x * y * z;
    return result;
}

void printNameTenTimes(){
    for(int i=1; i<=10; i++){
        cout<<"Shivam"<<endl;
    }
}

void printMultiples(int num){
    for(int i=1; i<=10; i++){
        cout<<num*i<<endl;
    }
}

int convertIntoCelcius(int far){
    int celcius = (far - 32) * (5/9);
    return celcius;
}

char convertIntoUpperCase(char ch){
    char answer = ch - 'a' + 'A';
    return answer;
}

int main(){
//functions are used when we want to perform a same task multiple times and when we write all the lines again and again to perform that specific task then it makes the code bulky and buggy.
    // printCounting();
    // cout<<"Shivam"<<endl;

    // printCounting();

    // int a;
    // cin>>a;
    // cout<<a<<endl;

    // printCounting();

    // int result = sum(5,3); //When we make non-void fxn then it returns something to main fxn which is not printed directly so first store the result of fxn in a variable then print that varriable.
    // cout<<result<<endl;

    // int x,y,z;
    // cout<<"Enter the value for x, y and z : ";
    // cin>> x >> y >>z;
    // int answer = getMultiplication(x,y,z);
    // cout<<"Answer is : "<<answer<<endl; 

    // printMultiples(7);

    int conversion = convertIntoCelcius(32);
    cout<<conversion<<endl;

    char res = convertIntoUpperCase('h');
    cout<<res<<endl;

    return 0;
}