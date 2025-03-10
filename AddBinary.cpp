#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        string addBinary(string a, string b) {
            int sza = a.size();
            int szb = b.size();
            if(sza>szb)
            {
                reverse(b.begin(),b.end());

                for(int i=0;i<sza-szb; i++)
                {
                    b.push_back('0');
                }
                reverse(b.begin(),b.end());
            }
            else if(sza<szb)
            {
                reverse(a.begin(),a.end());

                for(int i=0;i<szb-sza; i++)
                {
                    a.push_back('0');
                }
                reverse(a.begin(),a.end());
            }
            
            int size = a.size();
            string ans ;
            int temp = 0;
            for(int i=size-1; i>=0; i--)
            {
                if(temp==1 and a[i]=='1' and b[i]=='1')
                {
                    ans.push_back('1');
                    temp=1;
                    
           
                }
                else if((temp==1 and a[i]=='1') or (temp==1 and b[i]=='1') or (a[i]=='1' and b[i]=='1') )
                {
                    ans.push_back('0');
                    temp=1;
                    
                }
                else
                {
                    char c = a[i]+b[i]-2*48;
                    if(temp == 1) c = c+temp+48; 
                    else c=c+48;
                    temp=0;
                    ans.push_back(c);
                } 
            }
            if(temp == 1) ans.push_back('1');
            reverse(ans.begin(),ans.end());
            return ans;
        }
    };
int main()
{
    
    string a;
    string b;
    cin>>a>>b;
    Solution *s= new Solution();
    cout<<s->addBinary(a,b);
    return 0;
}