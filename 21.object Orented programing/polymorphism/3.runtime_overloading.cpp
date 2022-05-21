#include<iostream>
using namespace std;

class base{
    public:
    virtual void print(){
        cout<<"this is the base class's print function"<<endl;
    }
    virtual void display(){
        cout<<"this is the base class display function"<<endl;
    }
};
class Derived: public base{
    public:
    void print(){
        cout<<"this is the derived class's print function"<<endl;
    }
    void display(){
        cout<<"this is the derived class display function"<<endl;
    }
};

int main(){
    base *baseptr;
    Derived d;
    baseptr = &d;
    baseptr->print();       //this is the base class's print function
    baseptr->display();     //this is the base class display function
    return 0;
}