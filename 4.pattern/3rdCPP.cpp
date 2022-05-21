  #include<iostream>
  using namespace std;

   /* n :5
    1 
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5 */
  int main(){
      int n ;
      cout<<"n :";
      cin>>n;
      for(int i = 0;i<n ;i++){
          for(int j =0 ;j<=i;j++){
              cout<<i<<" ";
          }
          cout<<endl;
      }
  }