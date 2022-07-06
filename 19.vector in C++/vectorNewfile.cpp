#include<bits/stdc++.h>
using namespace std;

void display(vector<int> &v){
    for(int i =0 ;i<v.size() ;i++){
        cout<<v[i]<<" ";
    }
}
int main(){
    vector<int> vect1 ;
    int element ,size;
    cout<<"Enter the size of the vector: ";
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter an element to add to this vector :";
        cin>>element;
        vect1.push_back(element);
    }
    display(vect1);
    return 0;
}