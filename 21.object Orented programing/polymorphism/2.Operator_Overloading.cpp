#include<bits/stdc++.h>
using namespace std;
//Oeperator overloading

class Complex{
    private:
    int real ,imag;
    public:
    Complex(int r=0,int i=0){
        real = r;
        imag = i;
    }
    Complex operator + (Complex const &obj){
        Complex result ;
        result.imag = imag + obj.imag;
        result.real = real + obj.real ;
        return result ;
    }
    void display(){
        cout<<real <<" + i"<<imag<<endl;
    }
};

int main(){
    Complex c1(5,4),c2(5,2);
    Complex c3 = c1+c2 ;
    c3.display();
    return 0;
}