#include<iostream>
using namespace std;

#define n 100

class Queue{
    private:
        int * arr;
        int  front;
        int  back ;
    public:
    Queue(){
        arr = new int[n];
        front =-1;
        back =-1;
    }
    void enqueue(int val){
        if(back == n-1){
            cout<<"Queue overflow"<<endl;
        }
        back++;
        arr[back] = val;
        if(front==-1){
            front ++;
        }
    }
    void dequeue(){
        if(front == -1 || front>back){
            cout<<"Queue is empty"<<endl;
            return; 

        }
        front++;

    }
    int peek(){
        if(front==-1 ){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];

    }
    bool empty(){
        if(front ==-1 || front >back){
            return true;
        }
        return false;
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
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.empty()<<endl;
    
    return 0;
}