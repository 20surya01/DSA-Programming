#include<bits/stdc++.h>
using namespace std;


class Teacher{
    string name;

    public:
    Teacher(){
        cout<<"defult constructor"<<"\n\n";             // defult constructor
    }

    Teacher(string s,int n,bool m){ 
        cout<<"parameterised constructor"<<endl;      //constructor :-it a data type which is made when the class name is given .
        name = s;                                     // parameterised consttructor
        age = n;
        gender = m;
    }
    Teacher(Teacher &a){
        cout<<"copy constructor"<<endl;                //copy constructor
        name =a.name;
        age = a.age;
        gender = a.gender;
    }
    ~Teacher(){
        cout<<"Distructor is called"<<endl;          //it will distroy all objects 
    }
    void setName(string s){
        name=s;
    }
    void getName(){
        cout<<name<<endl;
        
    }
    
    int age;
    bool gender;

    void printfInfo(){
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<" Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;
        cout<<endl;

    }
    bool operator == (Teacher &a){
        if(name == a.name && age == a.age && gender == a.gender){
            return true;
        }
        else{
            return false;
        }
    }

};

int main(){
    // Student a;
    // a.name = "surya";
    // a.age =20;
    // a.gender  =1;
    // cout<<a.name<<endl;
    // int n;
    // cin>> n;
    // Teacher array[n];
    // for(int i =0 ; i<n ; i++){
    //     string s;
    //     cout<<"Name = ";
    //     cin>>s;
    //     array->setName(s);
    //     cout<<" Age = ";
    //     cin>>array[i].age;
    //     cout<<"Gender = ";
    //     cin>>array[i].gender;
    // }
    // for(int i =0 ; i<n ; i++){
    //     array[i].printfInfo();
    // }

    Teacher a("surya",20,1);
    a.printfInfo();
    

    Teacher b;
    Teacher c =a;
    c.printfInfo();
    if(c==b){
        cout<<"both are same"<<endl;
    }
    else{
        cout<<"different"<<endl;
    }
    return 0;
}