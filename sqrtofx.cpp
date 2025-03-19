class Solution {
    public:
        int mySqrt(int x) {
            if(x==1 ) return 1;
            double low =0.0;
            double high = x*1.0;
            double mid =0.0;
            while(high-low>0.000001)
            {
                 mid = (low+high)/2.0;
                if(mid*mid<=x) low = mid;
                else high = mid;
            }
    
            long long ans = (int) mid;
            if((ans+1)*(ans+1)==x) return ans+1;
            return ans;
        }
    };