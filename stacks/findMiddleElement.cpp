#include<iostream>
#include<stack>

using namespace std;

// find middle element of stack
// for even size of stack, we are printing top of second half of stack
int findMiddle(stack<int> s1){
    int lenOfS1 = s1.size();
    if(lenOfS1==0)
        return -1;
    int halfSize = lenOfS1/2;

    stack<int> s2;
    for(int i=0; i<halfSize; i++){
        int topelement = s1.top();
        s2.push(topelement);
        s1.pop();
    }
    int middle = s1.top();
    return middle;
}

void print(const stack<int> &s){
    stack<int> temp=s;
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        temp.pop();
    }
    cout<<endl;
}


int main(){
    stack<int> s1;
    int noOfVal;
    cout<<"How many values you wish to insert in the stack :";
    cin>>noOfVal;

    while(cin.fail()){
        cout<<"Invalid Input!!!"<<endl;
        cin.clear();    //clears the flag -> agr glt input diya toh cin.fail() true hoga, so basically it clears that flag
        cin.ignore(1000,'\n');  //ignores either 1000 chars OR if it encounters new line it stops-> whichever between 2 is encountered first, is executed

        cout<<"Enter number again : ";
        cin>>noOfVal;
    }

    int value;
    for(int i=0; i<noOfVal; i++){
        cout<<"Value "<<i+1<<" :";
        cin>>value;
        s1.push(value);
    }
    // s1.push(5);
    // s1.push(10);
    // s1.push(20);
    // s1.push(30);
    // s1.push(40);
    // s1.push(50);

    print(s1);

    int ans = findMiddle(s1);
    (ans==-1) ? cout<<"Empty Stack"<<endl : cout<<"Middle of Stack : "<<ans<<endl;

    return 0;
}