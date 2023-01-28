class Solution {
public:
    void helper(vector<int>&nums,vector<int>&temp,vector<vector<int>>& ans,int i,int last){
        if(i==nums.size()){
            ans.push_back(temp);
            return ;
        }
        else {
            if(last!=nums[i])
            helper(nums,temp,ans,i+1,last);
            
            temp.push_back(nums[i]);
            helper(nums,temp,ans,i+1,nums[i]);
            temp.pop_back();
        }
        return;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        helper(nums,temp,ans,0,INT_MIN);
        return ans;
    }
};