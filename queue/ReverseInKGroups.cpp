#include<iostream>
#include<stack>
#include<queue>

using namespace std;

void reverseInKgroup(queue<int> &q, int k, int count){
    if(count>=k){   
        // agr size bdha h 'k' se tbhi hm ye sb krenge
        
        // m reverse krunga k group me
        // queue m se element nikaalenge-> q.front -> push it in stack
        // stack me se pop and push at the end of queue
        
        // 1 case krliya
        stack<int> st;
        for(int i=0; i<k; i++){
            int queueElement=q.front();
            q.pop();
            
            st.push(queueElement);
        }
        for(int i=0; i<k; i++){
            int stackElement= st.top();
            st.pop();
            
            q.push(stackElement);
        }
        
        // baaki recursion smbhaal lega
        reverseInKgroup(q,k,count-k);
    }
    else{
        //base case
        // count<k hai
        // toh bche hue element ko as it is queue me insert krenge
        for(int i=0; i<count; i++){
            int queueElement = q.front();
            q.pop();
    
            q.push(queueElement);
        }
    }
}

void print(queue<int> &q){
    queue<int> temp=q;
    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    q.push(90);
    q.push(100);
    q.push(110);

    print(q);
    
    int k=11;
    int count=q.size();
    reverseInKgroup(q,k,count);
    
    print(q);




    return 0;
}