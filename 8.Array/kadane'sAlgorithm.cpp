/*Kadane’sAlgorithm:Idea:
Start taking the sum of the array,
as soon as it gets negative,
discard the current subarray,
and start a new sum. 
TimeComplexity:O(N)
SpaceComplexity:O(1)*/

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0;i<n;i++){
        cin>>a[i];
    }
    int curS =0;
    int maxS =INT_MIN;
    for(int i=0;i<n;i++){
        curS += a[i];
        if(curS<0){
            curS =0;
        }
        maxS = max(maxS,curS);
    }
    cout<<maxS<<endl;
    return 0;
}