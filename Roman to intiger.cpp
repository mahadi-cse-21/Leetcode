#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int romanToInt(string s) {
            int res=0;
            
            for(int i=0; i<s.size(); i++)
            {
                int ans = res;
                if(s[i]=='M') res+=1000;
                else if(s[i]=='D') res+=500;
               
                else if(s[i]=='L') res+=50;
                
                else if(s[i]=='V') res+=5;
                
                else if(s[i]=='I' && s[i+1]=='V') { res+=4; i++; }
                else if(s[i]=='I' && s[i+1]=='X') { res+=9; i++; }
                else if(s[i]=='X' && s[i+1]=='L') { res+=40; i++; }
                else if(s[i]=='X' && s[i+1]=='C') { res+=90; i++; }
                else if(s[i]=='C' && s[i+1]=='D') { res+=400; i++; }
                else if(s[i]=='C' && s[i+1]=='M') { res+=900; i++; }
                else if(s[i]=='C') res+=100;
                else if(s[i]=='X') res+=10;
                else if(s[i]=='I') res+=1;
                cout<<res-ans<<endl;
            }
            return res;

        }
    };
int main()
{
    string s;
    cin>>s;
   
    Solution *sp = new Solution();
    cout<<sp->romanToInt(s);
    return 0;
}