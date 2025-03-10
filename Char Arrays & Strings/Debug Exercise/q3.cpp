#include<iostream>
#include<algorithm>
using namespace std;

string addBinary(string a, string b) {
    string ans="";
    int carry = 0;
    int i = a.length() - 1;
    int j = b.length() - 1;

    while (i >= 0 || j >= 0 || carry) {
      if (i >= 0)
        carry += a[i--] - '0';
      if (j >= 0)
        carry += b[j--] - '0';
      ans += carry%2 + '0';
      carry /= 2;
    }

    reverse(ans.begin(), ans.end());
    return ans;
  }


int main(){
    string a;
    string b;
    cout<<"Enter number two numbers to find their sum :";
    cin>>a>>b;

    string result = addBinary(a,b);
    cout<<"Sum of 2 Binary numbers : "<<result<<endl;


    return 0;
}