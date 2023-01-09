// make two variables left and right and point them at fist and last index of the array . start traversing the array from the starting . if the value of a[i]=0 then replace it with the left index value and increment the left index value and go to next iteration . if the value is 2 then replace it with right index value BUT DO NOT INCREMENT THE i i.e DONOT GO TO NEXT ITERATION . 

#include<bits/stdc++.h>

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        for(int i=0;i<=right;i++){
            if(nums[i]==0){swap(nums[left],nums[i]);
            left++;}
            else if(nums[i]==2){
                swap(nums[i],nums[right]);
                right--;
                i--;
            }
        }
    
    }
};