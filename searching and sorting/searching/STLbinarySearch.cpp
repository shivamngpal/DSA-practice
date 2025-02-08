#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> arr = {2,8,10,20,30,34,46,78};
    // int n = arr.size();

    bool ans = binary_search(arr.begin(),arr.end(),46);

    ans ? cout<<"Found"<<endl : cout<<"Not Found"<<endl;

    return 0;

}