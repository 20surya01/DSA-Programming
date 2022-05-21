#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goeshere
	double a,b,x;
	int t;
	int f ;
	cin>>t;
	for(int i =1;i <=t;i++){
	    cin>>a>>b;
	    if(a>b){
	        f = a - b;
	    }
	    else{
	         f = b-a ;
	    }
	    double arr[f +1];
	    for(x =a ;x<=b ;x++){
	        double c = (b - x)/2;
	        double d = (x - a)/2 ; 
	        double e = ceil(c) + ceil(d) ;
            int g = x -a;
	        arr[g] =e ;
	        
	    }
	    int max =arr[0];
	    for(int i =1 ;i<=f ;i++){
	        if(arr[i]>max){
	            max = arr[i];
	        }
	    }
	    cout<<max<<endl;
	}
	return 0;
}
