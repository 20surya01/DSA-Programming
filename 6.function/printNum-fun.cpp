#include<iostream>
#include<math.h>
using namespace std;

void square(int num,int n){
    cout<<pow(num,n)<<endl;
}
void print(int num){
    cout<<num<<endl;
    square(num,num);

    return;
}

int main(){
    int a;
    cin>>a;
    print(a);
    return 0;
}