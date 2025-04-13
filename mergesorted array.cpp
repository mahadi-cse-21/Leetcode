#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
        void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
            vector<int> num;
            int i = 0, j = 0;
    
            while (i < m && j < n) {
                if (nums1[i] <= nums2[j]) {
                    num.push_back(nums1[i++]);
                } else {
                    num.push_back(nums2[j++]);
                }
            }
    
            while (i < m) {
                num.push_back(nums1[i++]);
            }
    
            while (j < n) {
                num.push_back(nums2[j++]);
            }
    
            nums1 = num;
        }
    };
    

int main()
{
    Solution *s1 = new Solution();
    vector<int> nums1,nums2;
    for(int i=0; i<6; i++)
    {
        int a; 
        cin>>a;
        nums1.push_back(a);
    }
    for(int i=0; i<3; i++)
    {
        int a; 
        cin>>a;
        nums2.push_back(a);
    }
    s1->merge(nums1,3,nums2,3);
}