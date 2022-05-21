#include<iostream>
#include<deque>
using namespace std;

int main(){
    deque<int> dq;
    dq.push_front(1);
    dq.push_front(2);
    dq.push_front(3);
    dq.push_back(5);
    dq.push_back(6);
    dq.push_back(7);

    while(!dq.empty()){
        cout<<dq.front()<<" "<<dq.back()<<endl;
        dq.pop_front();
        dq.pop_back();
    }
    return 0;
}