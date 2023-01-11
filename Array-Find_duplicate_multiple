// take two pointers slow and fast and point them at the value of first index of array . now keep moving slow to the index given by the value of current index and fast by twice the speed of slow . when the collide . relocate fast at the first index and start moving slow and fast by 1 step each . when the collide again that is your ans ;



class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow=nums[0];
        int fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }
        while(slow!=fast);

        fast=nums[0];
        while(fast!=slow){
            fast=nums[fast];
            slow=nums[slow];
        }
        return fast;

    }
};