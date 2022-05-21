#include<iostream>
using namespace std;

class complex{
    private:
    int real ,img;
    public:
    complex(int r =0 ,int i=0){
        real = r;
        img = i;
    }
    complex operator+(complex const &obj){
        complex result ;
        result.real = real + obj.real;
        result.img = img + obj.img;
        return result;
    }
    complex operator-(complex const &obj){
        complex result;
        result.real = obj.real - real;
        result.img = obj.img - img;
        return result;
    }
    void display(){
        cout<<real<<" + i"<<img<<endl;
    }
};

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    complex c1(a,b) ,c2(c,d);
    complex c3 = c1 + c2;
    complex c4 = c1 - c2 ;
    // complex c5 = c1 * c2 ;
    c4.display();
    c3.display();
}