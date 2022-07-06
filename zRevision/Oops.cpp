#include<bits/stdc++.h>
using namespace std;

class Classroom{
    int Blackboard;
    int fan;
    int windows;
    public:
    Classroom(){
        cout<<"defult Class"<<"\n\n";
        Blackboard =1;
        fan = 3;
        windows =2;
    }
    Classroom(int n,int m,int k){
        cout<<"class has been built"<<endl;
        Blackboard =n;
        fan =m;
        windows = k;
    }
    void projector(int a, int b){
        cout<<"projector is runing from "<<a<<" till "<<b<<endl;
    }
    void classinUse(int x){
        cout<<"this class have "<<x<<" no of student and using "<<Blackboard<<" nof blackboard with "<<windows<<" , "<<fan<<" windows fans"<<endl;
    }
};

int main(){
    Classroom math(2,6,4);
    math.projector(12,1);
    math.classinUse(45);
    Classroom Physics;
    Physics.projector(10,12);
    Physics.classinUse(25);
    return 0;
}