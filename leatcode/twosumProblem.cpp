#include<bits/stdc++.h>
using namespace std;

class solution{
    private:
    vector<pair<int,int>> H;
    vector <int> temp;

    bool check(int diff, vector<pair<int,int>> x){
        for(int i =0 ;i<x.size(); i++){
            if(x[i].first == diff) {
                temp.push_back(x[i].second);
                return true ;
            }
            
        }
        return false;

    }
    public: 
    vector twoSum(int a[], int target){
        temp.push_back(-1);
        int n =sizeof(a)/sizeof(a[0]);
        for(int i =0 ;i<n ;i++){
            int diff =target - a[i];
            if(check(diff ,H)){
                temp.pop_back();
                temp.push_back(H[i].second);
                return temp;
            }
            else{
                H.push_back(make_pair(a[i] ,i));
            }
        }
        return temp ;
    } 

}

int main(){
    int N, target;
    int arr[N];
    cin<<N<<target;
    for(int i =0 ;i<N;i++){
        int x;
        cin<<x;
        arr[i]= x;
    }
    solution S;
    vector<int>sol ;
    sol = S.twoSum(arr,target);
    for(int i =0 ;i<2;i++){
        cout<<sol[i]<<" ";
    }
    return 0;
}