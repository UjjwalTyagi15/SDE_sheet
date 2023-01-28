#include <bits/stdc++.h> 
using namespace std;
    void helper(vector<int>&nums,vector<int>& ans ,int sum,int i){
      if (i == nums.size()) {
        ans.push_back(sum);
        return;
      }
      else {
          helper(nums,ans,sum,i+1);
          helper(nums,ans,sum+nums[i],i+1);
      }
      return ;
    }

vector<int> subsetSum(vector<int> &num)
{   vector<int> ans;
    helper(num,ans,0,0);
    sort(ans.begin(),ans.end());
    return ans;
}