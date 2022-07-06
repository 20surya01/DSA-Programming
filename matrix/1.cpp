#include<bits/stdc++.h>
using namespace std;

class matrix{
    private:
    int *A;
    int n ;

    public:
    matrix(){
        n = 2;
        A = new int[2];
    }
    matrix(int n){
        this->n =n;
        A= new int[n];
    }
    ~matrix(){
        delete []A;
        cout<<"matrix is distroied";
    }
    void set(int i ,int j , int x){
        if(i==j){
            A[i-1] =x;
        }
    }
    void get(int i ,int j){
        if(i==j){
           cout<<A[i-1]<<"\n"; 
        }
        else cout<<"0"<<"\n";
    }

    void display(){
        for(int i =1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(i==j){
                    cout<<A[i-1]<<" ";
                }
                else cout<<"0 ";
            }
            cout<<endl;
        }
    }
    void viewA(){
        for(int i=0;i<n;i++){
            cout<<A[i]<<" ";
        }
    }

};
int main(){
    matrix m(4);
    m.set(1,1,5);
    m.set(2,2,10);
    m.set(3,3,7);
    m.set(3,3,9);
    m.display();
    cout<<"\n";
    m.get(3,4);

    return 0;
}