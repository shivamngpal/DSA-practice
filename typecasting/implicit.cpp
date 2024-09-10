#include <iostream>
using namespace std;

int main(){

//int to float
    int num1 = 10;
    float num2 = 5.5;
    float result = num1 + num2;  //Implicit conversion -> num1 is automatically converted to float.
    //If we convert num2 to int then 5.5 becomes 5 and information will be lost which is a bad practice hence compiler always want to store more data to convert to the type which can contain large data,i.e., float.
    cout<<result<<endl;

//char to int 
    char ch = 'A'; //'A' is stored as 65 in memory which is ASCII value equivalent to 'A'
    int a = ch + 1; //Now we are adding 1 to 'A' which is 65 and storing in int datatype hence 66 is printed.
    cout<<a<<endl;

//int to char
    int b =97;
    char chnew =b;  //97 is implicitly converted to 'a' hence, int to char conversion
    cout<<chnew<<endl;


    return 0;
}