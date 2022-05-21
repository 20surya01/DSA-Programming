#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int n){
        data =n;
        next =NULL;
    }
};

class Queue{
    private:
    node* front;
    node* back ;
    public:

    Queue(){
        front =NULL;
        back =NULL;

    }
    void enqueue(int val){
        node* n = new node(val);

        if(front ==NULL){
            front = n;
            back = n;
            return ;
        }
        back->next =n;
        back = n;
    }
    void dequeue(){
        if(front ==NULL){
            cout<<"The Queue is empty"<<endl;
            return ;
        }
        node* todelete =front;
        front = front->next;
        delete todelete;

    }
    
    int peek(){
        if(front==NULL){
            cout<<"The Queue is empty"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
        bool result =(front == NULL)? true : false;
        return result;
    }
};

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    string val = (q.empty())? "empty": "not empty";
    cout<<val<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    string val2 = (q.empty())? "empty": "not empty";
    cout<<val2 <<endl;
    return 0;
}