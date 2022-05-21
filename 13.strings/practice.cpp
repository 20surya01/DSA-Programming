#include<bits/stdc++.h>
using namespace std;

int main(){
    // string str ;
    // cin>>str;                            //type 1 declaration or taking input one string
    // string str1(5,'n');                  //type 2 declaration     remainber inside ('') single qoute is used not double quote 
    // string str2 ="suryakanta";           //type 3 declaration
    // cout<<str<<" "<<str1<<endl<<str2;    //XXXnnnnnsuryakanta
    // string str3 ;
    // getline(cin,str3);                   //type 4 taking full sentence as a string including " "spaces also.
    // cout<<str3;

    //string function  --append()--
    string s1 = "fam" ,s2 ="ily";
    s1.append(s2);
    cout<<s1<<endl;

    //acessing char of a string
    cout<<s1[1]<<endl;;

    // clear() function
    string abc="this is my string practice";
    cout<<abc<<endl;
    abc.clear();
    cout<<abc<<endl;

    // compare() function
    string s11 ="xyz";                  //when s11 is greater then s22 caligraphicaly and s22 is   
    string s22 = "abc";                 // compaired with s11 then is return "-1" and if s11 is compaired then 
    cout<<s22.compare(s11)<<endl;             // it return "1" or if strings are equale then it returns "0"
    
    //empty function --empty()--
    string cat ="cat dog pets";
    cout<<cat.empty()<<endl;               //empty() returns a boolean value 
    cat.clear();                           //if it is not empty it return "0"
    cout<<cat.empty()<<endl;               //if it is empty then it returns "1"

    //erase() function
    string x1 = "nincompoop";
    x1.erase(3,2);                          //first argument is index number from where to start deletion 
    cout<<x1<<endl;                         //second argument is no of char to delete


    //find() funtion
    string x2 = "nincompoop";
    cout<<x2.find("com")<<endl;              //returns the index of first char


    //insert() function
    x2.insert(2,"lol");                      //1st arg is index where to insert and 2nd is string to insert
    cout<<x2<<endl;

    //lenth() or size() function
    cout<<x2.size()<<" "<<x2.length()<<endl;

    //help more in iteration
    // for(int i =0;i<x2.length();i++){
    //     cout<<x2[i]<<endl;
    // }

    //finind substring in string --substr()--function
    cout<<x2.substr(6,4)<<endl;               //1st arg index 2nd arg number of char


    //string to integer function --stoi()--
    string a1 = "1243";
    int a2 = stoi(a1);
    cout<<a2+2<<endl;

    //integer to string function --tos_string()--
    int t = 1243;
    cout<<t+2<<" "<<to_string(t) +"2"<<endl;    //'+' op work like append fun

    //sorting string  --sort()--
    string v1 ="dnnfvklxkcnwdkcmskl";             //for sorting we need a header file --<algorithm>--
    sort(v1.begin(),v1.end());
    cout<<v1<<endl;                               //sorted in lexicographicaly order


    return 0;
}