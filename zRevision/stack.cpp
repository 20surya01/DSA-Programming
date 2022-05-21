#include<iostream>
using namespace std;

#define n =100

class Stack{
    private:
    int* arr;
    int top;
    public:
    Stack(){
        arr = new int[n];
        top =-1;

    }
    void push(int x){
        if(top ==n-1){
            cout<<"stack overflow"<<endl;
            return ;
        }
        top++;
        arr[top] =x;
    }
    
};