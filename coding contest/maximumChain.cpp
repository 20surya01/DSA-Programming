#include<bits/stdc++.h>
using namespace std;

//The structure to use is as follows
struct val{
	int first;
	int second;
};

bool myCompare(pair<int,int> p1 ,pair<int,int> p2){
    return p1.first<p2.first ;
}
class Solution{
    public:
        /*You are required to complete this method*/

        int maxChainLen(struct val p[],int n){
            int ans =1;
            vector<pair<int,int>> v;
            for(int i=0 ;i< n;i++){
                if(p[i].first<p[i].second){
                    
                    v.push_back(make_pair(p[i].first,p[i].second));
                }
            }
            sort(v.begin(),v.end(),myCompare);
            int i =0;
            int j =1;
            for(;j<v.size();){
                if(v[i].second<v[j].first){
                    ans++;
                    i =j;
                    j++;
                }
                j++;
            }         
            

            return ans;
        }
};

int main(){
    int n;
    cin>>n;
    val p[n];
    for(int i =0; i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    Solution ob;
    cout<<ob.maxChainLen(p,n);
    
    return 0;
}