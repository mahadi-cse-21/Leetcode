class Solution {
    public:
        int climbStairs(int n) {
            int count = 1;
            while(n>0)
            {
                n-=2;
                count++;
            }
            return count;
        }
    };