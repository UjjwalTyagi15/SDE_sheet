// start from the end and keep two pointers.
//  keep one at the end and the other keeps moving backwards . 
// for every value it reaches check if the value of that index is enough to jump to our j index . and if it is enough then make that index as j as now we know that once you reach index you can reach the end . so now we check if we can reach this index instead .
 



class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=nums.size()-1;
        int j=i;
        while(i>=0 ){
            if(i==0 && nums[i]<(j-i))return false;
            if(nums[i]>=j-i){
                j=i;
            }
            i--;
        }
        return true;
    }
};