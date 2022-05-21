#include<bits/stdc++.h>
using namespace std;

class Teacher{
    string name;

    public:
    Teacher(){
        cout<<"defult construtor"<<"\n\n";
    }
    Teacher(string s, int n,bool m){
        cout<<"parameterised constructor"<<endl;
        name =s;
        age =n;
        gender = m;
    }
}