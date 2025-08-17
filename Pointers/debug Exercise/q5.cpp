#include<iostream>
using namespace std;

// Debug the code. You have to make value of *q = 6.

// #include <iostream>
// using namespace std;

// int main(){
//     int p = 5;
//     int const *q = &p;
//     *q++;
//     cout << p << endl;
//     return 0;
// }

// as we can't modify a const value so remove 'const' keyword

int main(){
    int p = 5;
    int *q = &p;
    (*q)++;
    cout << *q << endl;
    cout << p << endl;
    return 0;


    return 0;
}