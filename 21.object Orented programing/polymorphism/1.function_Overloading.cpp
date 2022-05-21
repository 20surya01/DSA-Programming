/*
                                        ̥|---->function Overloading
Type of polymorphism-|---->complie time-|
                     |                  |---->operator Overloading
                     |---->Run time---------->Virtual Function
*/
#include<bits/stdc++.h>
using namespace std;
//function  overloading
class ApnaCollege{
    public:
    void fun(){
        cout<<"I m a function with no arguments"<<endl;
    }
    void fun(int x){
        cout<<"I m a function with int arguments"<<endl;
    }
    
    
    void fun(double x){
        cout<<"I m a function with double arguments"<<endl;
    }
};

int main(){
    ApnaCollege obj;
    obj.fun();
    obj.fun(4);
    // obj.fun(6.3);
    obj.fun(0.6);
    return 0;
}