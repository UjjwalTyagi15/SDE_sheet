class Solution {
public:
    void helper(vector<int>& nums,int target,int i,vector<int>& temp,vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(i==nums.size() || target<0)return ;
        for(int j=i;j<nums.size();j++){
            if(j>i && nums[j]==nums[j-1])continue;
            temp.push_back(nums[j]);
            helper(nums,target-nums[j],j+1,temp,ans);
            temp.pop_back();
        }


    }



    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        helper(candidates,target,0,temp,ans);        

        return ans;
    }
};