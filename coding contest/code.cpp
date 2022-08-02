#include<iostream>
using namespace std;
int getvalue(int n,int b,int*oth);
int main(){
int n,b,r,rem,arr[b],i,*oth;
cout<<"Enter the number n\n";
cin>>n;
cout<<"Enter the base b\n";
cin>>b;
cout<<"Enter the base r\n";
cin>>r;
int c=getvalue(n,b,oth);
while(oth>0){
rem=*oth%r;
*oth=(*oth)/r;
arr[i]=rem;
i++;
}
cout<<"Print the number n of base r\n";
for(int j=i-1;j>=0;j--){
cout<<arr[j]<<endl;
}
}
int getvalue(int n,int b,int*oth){
int rv=0;
int p=1;
while(n>0){
int dig=n%10;
n=n/10;
rv+=dig*p;
p=p*b;
*oth=*oth*rv;
}
cout<<"Print the number of base b\n";
cout<<rv;
cout<<"Print the number oth\n";
cout<<*oth;
return 0;
}
