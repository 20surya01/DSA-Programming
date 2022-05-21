//using call stack

#include<bits/stdc++.h>
using namespace std;

class Queue{
    stack<int> s1;

    public:
    void push(int x){
        s1.push(x);
        
    }
    int pop(){
        if(s1.empty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        int topval = s1.top();
        s1.pop();
        if(s1.empty()){
            return topval;
        }
        int item = pop();
        s1.push(topval);
        return item;
    }
    bool empty(){
        if(s1.empty()){
            return true;
        }
        return false;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.pop();
    

    
    return 0;
}