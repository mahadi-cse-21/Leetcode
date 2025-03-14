#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maximumCandies(vector<int>& candies, long long k) {
        long long left = 1, right = *max_element(candies.begin(), candies.end());
        long long result = 0;

        while (left <= right) {
            long long mid = left + (right - left) / 2;
            if (canAllocate(candies, k, mid)) {
                result = mid;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }

private:
    bool canAllocate(const vector<int>& candies, long long k, long long amount) {
        long long count = 0;
        for (const int& candy : candies) {
            count += candy / amount;
        }
        return count >= k;
    }
};