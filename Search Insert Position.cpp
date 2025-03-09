#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) 
        {
            int low = 0; 
            int high = nums.size()-1;
            while(low<high)
            {
                int mid = (low+high)/2;
                if(target<nums[mid])
                {
                    high = mid-1;
                }
                else if(target>nums[mid])
                {
                    low = mid+1;
                }
                else return mid;
            }
            cout<<low<<endl;
          if(target == nums[low]) return low;
          if(target< nums[low] && low!=0) return low;
          if(target< nums[low] && low==0) return 0;
          if(target>nums[low]&& low==-1) return low+2;
          return low+1;
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
    int target;
    cin>>target;
    Solution *sl = new Solution();
    cout<<sl->searchInsert(nums,target)<<endl;
    return 0;
}