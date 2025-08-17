// STRING TO INTEGER
#include<iostream>
#include <climits>
using namespace std;

int mystoi(string s) {
    int len = s.length();
    double num = 0;
    int i=0;
    while(s[i] == ' '){
        i++;
    }
    bool negative = s[i] == '-';
    negative == true ? i++ : i;
    while(i < len && s[i] >= '0' && s[i] <= '9'){
        num = num*10 + s[i]-'0';
        i++;
    }
    num = negative ? -num : num;
    num = (num > INT_MAX) ? INT_MAX : num;
    num = (num < INT_MIN) ? INT_MIN : num;
    return num;
}


int main(){
    string s;
    cout<<"STRING TO INTEGER"<<endl;
    cout<<"Enter a number :";
    cin>>s;

    int ans = mystoi(s);
    cout<<"String to Integer : "<<ans<<endl;


    return 0;
}