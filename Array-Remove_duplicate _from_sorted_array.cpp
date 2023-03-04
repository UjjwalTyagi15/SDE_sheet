// basically traverse from start and if you find the current and next element same then erase the next element and keep the i same


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()==0)return 0;
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]==nums[i+1]){
                nums.erase(nums.begin()+i);
                i-=1;
            }
        }
  return nums.size();  }
};