#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int n= nums.size();
            for(int i=0; i<n-1; i++)
            {
                if(nums[i]==nums[i+1])
                {
                    nums[i+1] = 0;
                    nums[i]=nums[i]*2;
                }
            }
            vector<int> res;
            for(int i=0; i<n; i++)
            {
                if(nums[i]!=0)
                {
                    res.push_back(nums[i]);
                }
            }
            int m = res.size();
            for(int i=0; i<n-m; i++)
            {
                res.push_back(0);
            }
        return res;
        }
    };
int main()
{
    int n;
    cin>>n;
    vector<int> nums;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        nums.push_back(x);
    }
   
    Solution *sp = new Solution();
    sp->applyOperations(nums);
    return 0;
}