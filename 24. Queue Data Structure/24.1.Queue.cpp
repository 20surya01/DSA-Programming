/*
Stores a list of items in which an item can be inserted at one
end and removed from the other end only
*/
//ARRAY IMPLEMENTATION
#include<iostream>
using namespace std;

#define n 20

class queue{
    int * arr;
    int front;
    int back;
    public:
    queue(){
        arr =new int[n];
        front =-1;
        back =-1;
    }
    void push(int x){      //enqueue is similar to push
        if(back ==n-1){
            cout<<"Queue overflow"<<endl;
        }
        back++;
        arr[back]=x;
        if(front==-1){
            front ++;
        }
    }

    void pop(){         //dequeue is similar to pop
        if(front ==-1 ||front>back){
            cout<<"No element in the Queue"<<endl;
            return;
        }
        front ++;
    }

    int peek(){
        if(front ==-1||front>back){
            cout<<"No element in the Queue"<<endl;
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front ==-1||front>back){
            return true ;
        }
        return false;
    }
};

int main(){

    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    
    return 0;
}