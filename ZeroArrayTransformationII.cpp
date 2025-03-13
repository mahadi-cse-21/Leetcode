#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int minZeroArray(vector<int> &nums, vector<vector<int>> &queries)
    {
        int n = nums.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
        }

        int q = queries.size();
        vector<int> cp1 = nums;
        vector<int> cp2 = nums;
        map<pair<int, int>, int> mp;
        map<int, pair<int, int>> mp1;
        int tmp = 0;
        int count = 0;
        for (int i = 0; i < q; i++)
        {
           if(sum>0) count++;
            cout << queries[i][0] << " " << queries[i][1] << " " << queries[i][2] << endl;
            for (int j = queries[i][0]; j <= queries[i][1]; j++)
            {
                if (sum == 0)
                {
                    tmp = 1;
                    break;
                }
                if (cp1[j] > 0)
                {
                    sum -= queries[i][2];
                    cp1[j] -= queries[i][2];
                }

               
            }
            if (tmp == 1)
            {
                break;
            }
        }
        if (sum == 0)
        {
            return count;
        }

        return -1;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
    }
    int q;
    cin >> q;
    map<int, int> mp;
    vector<vector<int>> queries;
    for (int i = 0; i < q; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        queries.push_back({a, b, c});
    }
    Solution *obj = new Solution();
    cout << obj->minZeroArray(nums, queries);
    return 0;
}