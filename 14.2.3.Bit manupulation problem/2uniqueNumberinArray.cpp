#include<bits/stdc++.h>
using namespace std;

int setBit(int n ,int pos){
    return (n & (1<<pos)) != 0;
}

void unique(int arr[],int n){          //here we find xor of all elements
    int xorsum = 0;
    for(int i =0 ; i<n ; i++){          //5^7 = 0101 ^0111 = 0010
        xorsum = xorsum ^arr[i];        // example xorsum of 5 and 7 = 0010  (i.e here rightmost setbit is in 1st postion)
    }
    int tempxor = xorsum;               // here we set value of xorsum to another variable as in further process xorsum will lost
    int setbit = 0;                     
    int pos = 0 ;                       //we intiated a pos variable to "0"
    while(setbit != 1){                 // loop run till we get the right pos (i.e 1 in case of 5,7)
        setbit =  xorsum & 1 ;          // we will get setbit =1 when xorsum bit is 1 in 0th place
        pos ++;
        xorsum = xorsum >>1;            // xorsum is right shifted by 1 place untill xorsum & 1 = 1
    }
    int newxor = 0;                      
    for(int i =0 ; i<n ; i++){
        if (setBit(arr[i],pos -1)){           //setBit is checking where is 1 in a[i] pos
            newxor = newxor ^ arr[i];         // newxor is get updated to one of a required ans by xoring with the elements those have 1 in ith pos
        }                                     
    }
    cout<<newxor<<endl;                      
    cout<<(tempxor^newxor)<<endl;            //by xoring stored value of xorsum with newxor we will get another required ans
    
}

int main(){
    int a []={1,2,3,5,7,3,2,1};
    unique(a,8);
    return 0;
}