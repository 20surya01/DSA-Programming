#include<iostream>
using namespace std;
    /*enter the number length pattern5
      
     *
    * *
   * * *
  * * * *
 * * * * *
 * * * * *
  * * * *
   * * *
    * *
     * */

int main(){
    int x = 0 ;
    int count;
    cout<<"enter the number length pattern";
    cin>>count;
    for (int i = 0; i <= count; i++)
    {
        for (int j = 0; j <= count-i ; j++)
        {
            cout<<" ";

        }
        for(int k = 1;k<=i;k++){
            cout<<"* ";
            x++ ;
        }
        cout<<endl;
    }
    for(int i =count ; i>= 0; i--){
        for( int j=0 ; j <=count - i  ; j++ ){
            cout<<" ";
        }
        for(int k = 1 ; k<=i ; k++){
            cout<<"* ";
        }
        cout<<"\n";
    }

    return 0 ;
    
}