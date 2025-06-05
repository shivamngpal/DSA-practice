#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>

using namespace std;

void solve(int arr[], int n, vector<int> &ans){
    stack<int> s;
    s.push(-1);

    for(int i=n-1; i>=0; i--){
        int currElement = arr[i];
        while(s.top()>=currElement)
            s.pop();

        // loop se bahar aa gye mtlb chota element mil gya hai
        ans.push_back(s.top());
        s.push(currElement);
    }
}

int main(){
    int arr[]={4,8,5,2,25};
    int n=5;
    vector<int> ans;

    solve(arr,n,ans);
    reverse(ans.begin(),ans.end());

    for(int i:ans)
        cout<<i<<" ";
    cout<<endl;


    return 0;
}