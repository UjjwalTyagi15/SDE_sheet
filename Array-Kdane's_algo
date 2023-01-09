// make 2 variables sum and final ans. traverse from start to end of array . keep on odding the numbers in sum . if the sum is less that zero then leave all the previous numbers and start to add fresh i.e make sum =0 . in each iteration make ans = max(sum,ans)
#include<bits/stdc++.h>

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=nums[0];
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            
            ans=max(ans,sum);    
            if(sum<0)
                sum=0;

       }
        return ans;
    }
};