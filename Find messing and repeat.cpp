/*
here i will solve leet code problem:2965. Find Missing and Repeated Values
*/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>> &grid)
    {
        int n = grid.size();
        map<int, int> mp;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                mp[grid[i][j]]+=grid[i][j];
            }
        }
        vector<int> ans;
        for (int i = 1; i <= n * n; i++)
        {
            cout<<mp[i]<<" ";
           
            if (mp[i] > 1)
            {
                ans.push_back(i);
            }
            else if (mp[i] == 0)
            {
                mp[i]=i;
                ans.push_back(i);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> grid[i][j];
        }
    }
    s.findMissingAndRepeatedValues(grid);
    return 0;
}