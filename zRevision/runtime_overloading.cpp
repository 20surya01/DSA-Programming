#include<iostream>
using namespace std;

class student{
    string name ;
    public:
    int age ;
    bool gender;

    student(){
        cout<<"Default constructor" << endl;
    }//default const

    student(string s,int a ,int g){
        cout<<"Parameterised constructor"<<endl;
        name =s;
        age = a;
        gender =g;

    }// paramerterised constructor

    student(student &a){
        cout<<"Copy constructor"<<endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }
    // ~student(){
    //     cout<<"Destructor called"<<endl;
    // }

    string getName(){
        return name;
    }
    void setName(string s){
        name =s;
    }
    
};

int main(){
    student boy("surya",20,1) ;
    cout<<boy.getName()<<endl;
    cout<<boy.gender<<endl;
    student girl;
    cout<<girl.gender<<endl;
    
    
}