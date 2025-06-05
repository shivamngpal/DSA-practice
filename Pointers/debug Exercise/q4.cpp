#include<iostream>
using namespace std;

// Bad practice used in pointer .
// init a pointer with 0 if u don't want to point it to any variable

// int* ptr;
// 	int a = 5;
// 	ptr = &a;
// 	cout << *ptr << endl;
// 	return 0;

int main(){
    int* ptr=0;
    int a = 5;
    ptr = &a;
    cout << *ptr << endl;
    return 0;
}