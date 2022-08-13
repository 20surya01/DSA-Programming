#include <bits/stdc++.h>
using namespace std;

class Solution
{
    private:
    string Swtch(int x){
        switch (x)
        {
        case 1:
            return "I" ;
        case 4:
            return "IV";
        case 5:
            return "V";
        case 9:
            return "IX";
        case 10:
            return "X" ;
        case 40:
            return "XL";
        case 50:
            return "L";
        case 90:
            return "XC";
        case 100:
            return "C";
        case 400:
            return "CD";
        case 500:
            return "D";
        case 900:
            return "CM";
        case 1000:
            return "M";

        default:
            break;
        }
        return "null";
    }
    public:
        
        string intToRoman(int num)
        {   
            vector<int> intg;
            stack<string> str;
            string soln;
            int x;
            while(num !=0){
                intg.push_back(num%10);
                num =num/10;
            }
            for(int i =0 ;i<intg.size() ;i++){
                if(intg[i] == 1 or intg[i] == 5 or intg[i] == 4 or intg[i] == 9){
                    x = pow(10,i) * intg[i];
                    str.push(Swtch(x));
                }
                if(intg[i] <4 and intg[i]>1){
                    x = pow(10 ,i);
                    for(int j =1; j<=intg[i] ;j++){
                        str.push(Swtch(x));
                    }
                }
                if(intg[i]>5 and intg[i]< 9){
                    int y = pow(10,i)*5;
                    x = pow(10 ,i);
                    for(int j =1; j<=(intg[i]-5) ;j++){
                        str.push(Swtch(x));
                    }
                    str.push(Swtch(y));
                }
            }
            while(!str.empty()){
                soln +=str.top();
                str.pop();
            }
            return soln;
        }
};

int main()
{   
    Solution s;
    int n;
    cin>>n;
    cout<<s.intToRoman(n);

    return 0;
}