#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            vector<int> ans;
            int size = digits.size();
            size--;
            int temp =0;
            int a = digits[size]+1;
            if(a>9) temp=1;
            ans.push_back(a%10);
            size--;
            
            while(size>=0)
            {
                a = digits[size]+temp;
                ans.push_back(a%10);
                if(a>9) temp = 1;
                else temp=0;      
                size--;
            }
            if(temp!=0)
            ans.push_back(1);
            reverse(ans.begin(),ans.end());
            return ans;
        }
        
    };
int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        int a;
        cin>>a;
        nums.push_back(a);
    }
    Solution *np = new Solution();
    nums = np->plusOne(nums);
    for(int i=0; i<nums.size(); i++)
    {
        cout<<nums[i]<<" ";
    }

    return 0;
}