#include<set>
#include<iostream>
using namespace std;

int main(){
    
    set<int,greater_equal<int>> s;
    s.insert(1);
    // s.insert(2);
    s.insert(3);
    // s.insert(4);
    s.insert(5);
    // for(auto i :s){
    //     cout<<i;
    // }
    // cout<<*s.lower_bound(4)<<"\n";
    // cout<<*s.lower_bound(2)<<"\n";
    // cout<<*s.lower_bound(1.5)<<"\n";
    for(auto i:s){
        cout<<i<<" ";
    }
    multiset<int> a;
    a.insert(1);
    a.insert(1);
    a.insert(2);
    a.erase(1);
    for(auto i:a){
        cout<<i<<" ";
    }
}
