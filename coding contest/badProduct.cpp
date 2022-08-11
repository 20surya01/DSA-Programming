#include<bits/stdc++.h>
using namespace std;


class Boast{
    int H[100] ={0};

    public:
        void hatch(int A[], int N ){
            for(int i =0; i<N ;i++){
                H[A[i]] ++;
            }
            
        
        }


};

int main(){
    int T;
    cin>>T;
    for(int i =1;i<=T;i++){
        int N ,A[N];
        cin>>N;
        for(int i =0 ;i< N;i++){
            cin>>A[i];
        }
        Boast a;
        a.hatch()
        
    }
    

    
    return 0;
}