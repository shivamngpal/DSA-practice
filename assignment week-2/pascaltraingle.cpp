//formaula for pascal triangle => c = c*(i-j)/j where i -> [1,N] and j-> [1,i]
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;

    for(int i=1; i<=n; i++){
        int c=1;
        for(int j=1; j<=i; j++){
            cout<<c<<" ";
            c=c*(i-j)/j;
        }
        cout<<endl;
    }

    return 0;
}