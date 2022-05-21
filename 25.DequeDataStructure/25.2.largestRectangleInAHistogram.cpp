/* given an array> Each element represents the 
height to the histogram's bar and the width of 
each bar is 1, find the area of largest rectangle in the histogrm.
*/
#include<bits/stdc++.h>
using namespace std;

int get_max_area(vector<int> a){
    stack<int> st;
    int n =a.size(),ans =0 , i=0;
    a.push_back(0);
    while(i<n){
        while(!st.empty() and a[st.top()] > a[i]){
            int t =st.top();
            int h = a[t];
            if(st.empty()){
                ans =max(ans,h * i);

            }
            else{
                int len =i-st.top() -1;
                ans = max(ans,h * len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int32_t main(){
    vector<int> a = {2,1,5,6,2,3};
    cout<<get_max_area(a);
    return 0;
}