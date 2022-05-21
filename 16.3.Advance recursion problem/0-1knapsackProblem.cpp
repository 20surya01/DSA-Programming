/*
Given n items, each item has value certain value 
and weight. We have to maximize thevalue 
of the objects we can accommodate in value bag of 
weight W.Idea: For each item, we have two choices, 
either to include it or exclude it.
Time Complexity: O(2​n​)
Space Complexity: O(2​n​)
space for call stack

*/
#include<bits/stdc++.h>
using namespace std;

int knapsack(int value[],int wt[], int n,int w){
    if(n==0||w==0){
        return 0;

    }
    if(wt[n-1]>w){
        return knapsack(value,wt,n-1,w);
    }
    return max(knapsack(value ,wt,n-1,w - wt[n-1] ) + value[n-1],knapsack(value,wt,n-1,w));
}

int main(){
    int value[] ={100,50,150};
    int wt[] = {10,20,30};
    cout<<knapsack(value,wt,3,50);
    return 0;
}