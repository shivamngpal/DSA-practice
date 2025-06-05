#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v(10);
    for(auto ele:v){
        cout<<ele<<endl;
    }
    return 0;
}