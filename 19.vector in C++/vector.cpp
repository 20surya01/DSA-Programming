#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    for(int i =0 ; i<5 ; i++){
        int n;
        cin>>n;
        v.push_back(n);             //1 2 3 4 5
    }

    for(int i =0 ; i<v.size() ; i++){            //general way for iteration
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int>:: iterator it ;
    for(it =v.begin() ;it!= v.end() ;it++){       //itertion by itertator
        cout<<*it<<" ";
    }
    cout<<endl;

    for(auto element:v){                           //auto keyward will decide which data type to complie
        cout<<element<<" ";
    }
    cout<<endl;

    v.pop_back();     //element from end will be poped out 

    vector<int> v2 (3,50);
    for(auto element:v2){
        cout<<element<<" ";           //50 50 50
    }
    cout<<endl;

    swap(v,v2);
    for(auto element:v2){
        cout<<element<<" ";           
    }
    
    sort(v.begin(),v.end());
    return 0;
}