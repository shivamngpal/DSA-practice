#include<iostream>
#include<stack>

// consider top of 2nd half as middle element for even sized stack

// This function finds the middle element of a stack using recursion.
// Parameters:
// - s: Reference to the stack whose middle element is to be found.
// - count: Current index in the recursion process.
// - halfSize: The index of the middle element in the stack.
// - middle: Reference to store the middle element of the stack.
void findMiddleRecursion(std::stack<int> &s, int halfSize, int &middle, int count){
    // base case
    if(count==halfSize){
        middle=s.top();
        return ;
    }

    // One case is solved by me 
    int topElement = s.top();
    s.pop();

    // the rest will be handled by recursion
    findMiddleRecursion(s,count+1, halfSize,middle);

    // backtrack
    s.push(topElement);
}

// This function prints the contents of the stack in reverse order (top to bottom).
void print(const std::stack<int> &s){
    std::stack<int> temp=s;     //copy of s 
    while(!temp.empty()){
        std::cout<<temp.top()<<" ";
        temp.pop();
    }
    std::cout<<std::endl;
}

int main(){
    std::stack<int> s;

    // s.push(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    print(s);

    int fullSize = s.size();
    int halfSize = fullSize/2;
    int count=0;
    int middle=-1;

    if(s.empty())
        middle=-1;
    else
        findMiddleRecursion(s,halfSize,middle, count);

    (middle==-1) ? std::cout<<"No Middle element found"<<std::endl : std::cout<<"Middle element : "<<middle<<std::endl;

    return 0;
}