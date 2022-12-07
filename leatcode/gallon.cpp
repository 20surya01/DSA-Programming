#include<bits/stdc++.h>
using namespace std;

vector<int>kthOcurrence(int x,vector<int> arr,vector<int> q) {
    int max_count=0;
    vector<int> idx;
    vector<int> ans;
    for(int i= 0;i<arr.size();i++){
        if(arr[i]==x){
            max_count ++ ;
            idx.push_back(i);
        }
        
    }
    for(int i =0;i<q.size();i++){
        if(q[i]>max_count) ans.push_back(-1) ;
        else ans.push_back(idx[q[i]-1]);
    }
    return ans;

}

int main(){
    vector<int> a,b;
    int x =9;
    a.push_back(4);
    a.push_back(9);
    a.push_back(8);
    a.push_back(9);
    a.push_back(9);
    a.push_back(4);
    
    b.push_back(7);
    b.push_back(3);
    b.push_back(7);
    b.push_back(6);
    vector<int> ans = kthOcurrence(x,a,b);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}