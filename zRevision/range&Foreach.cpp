#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(int val){
    cout<<val<<endl;
}
int main(){
    vector<int> vec;
    for(int i=0;i<5;i++){
        vec.push_back(i);
    }

    // for (int i:vec){
    //     cout<<i<<endl;
    // }
    // for_each(vec.begin(),vec.end(),
    // [](int i){
    //     cout<<i<<endl;
    //     }
    // );
    for_each(vec.begin(),vec.end(),print);  
    return 0;
    
}