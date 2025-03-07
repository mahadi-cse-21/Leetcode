#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums, int val) {
    int cnt = 0; 

    
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] != val) {
            nums[cnt] = nums[i]; 
            cnt++;
        }
    }
    return cnt; 
}
int main()
{
    vector<int> nums;
    int n;
    cin>>n;

 for(int i=0; i<n; i++)
 {
int a;
cin>>a;
nums.push_back(a);
 }
 int x ;
 cin>>x;
    cout<<removeElement(nums,x);
    return 0;
}