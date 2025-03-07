#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int strStr(string haystack, string needle) {
          
        string s;
        s=haystack;
        string st;
        st=needle;
        int j=0;
        int ans=0;
        int sx1 = s.size();
        int sx2 = st.size();
        if(sx2>sx1)
        
        { 
            
            return -1;
        }
        int temp=0;
        
        for(int i=0; i<=sx1-sx2; i++)
        {
           string s3;
           for(int j=0; j<sx2; j++)
           {
            s3.push_back(s[i+j]);
    
           }
           //cout<<s3<<endl;
           if(s3==st)
           {
            cout<<ans<<" "<<i<<endl;
            temp=1;
            ans=i;
            break;
           }
           s3.clear();
            
        }
        if(temp) return ans;
        return -1;
        }
    };

    int main()
    {
        return 0;
    }