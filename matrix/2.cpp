#include<bits/stdc++.h>
using namespace std;

class TriangleMtx{
    private:
        int i ,j;
        int *A;
    public:
        TriangleMtx(){
            i=2;
            j =2;
            A =new int[2];
        }
        TriangleMtx(int i ,int j){
            int n =i*(i-1)/2 + (j-1);
            A= new int[n];

        }
        ~ TriangleMtx(){
            delete []A;
        }
        void set(int i ,int j, int x){
            if(i>=j){
                int k =i*(i-1)/2 + (j-1);
                A[k] =x;
            }
        }
        void get(int i ,int j){
            if(i>=j) cout<<A[i*(i-1)/2 + (j-1)]<<"\n";
            else cout<<"0"<<"\n";
        }
        void display(){
            for(int i=1;i<=n;i++){
                for(int j =1;j<=n; j++){
                    if(i>=j){
                        cout<<A[i*(i-1)/2 + (j-1)]<<" ";
                    }
                    else cout<<"0 ";
                }
                cout<<endl;
            }
        }
};

int main(){
    TriangleMtx m(3,3);
    m.set(1,1,2);
    m.set(2,2,34);
    m.set(3,3,22);
    m.display();
    return 0;
}