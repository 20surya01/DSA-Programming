#include<bits/stdc++.h>
using namespace std;

class Sol{
    int H =INT_MAX;
    int profit =0;
    public:
    int maxProfit(vector<int>& prices) {
        for(int i =0; i<prices.size(); i++){
            if(prices[i]<H){
                H= prices[i];
            }
            // if(profit<prices[i]-H){
            profit= max(profit ,prices[i]-H);
            // }
        }
        return profit;
    }
    
};  

int main(){
    Sol s;
    vector<int> v;
    int n ;
    cin>>n;
    for(int i=0 ;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<s.maxProfit(v)<<endl;
    int k = *max_element(v.begin() ,v.end());
    cout<<k;
    return 0;
}