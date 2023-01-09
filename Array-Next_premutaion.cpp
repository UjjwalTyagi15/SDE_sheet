// start from the end and find the number which is less than its succesive number (a[i]<a[i+1]). now if there is no such number that is the numbers are in decending order then just simply reverse the list and return . else start another iteration from end till i and find the first number greater than a[i] .replace them and reverse all the numbers next to ith index

#include<bits/stdc++.h>

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),k,l;
        for(k=n-2;k>=0;k--){
            if(nums[k]<nums[k+1])
            break;
        }

        if(k<0)reverse(nums.begin(),nums.end());
        else
            {
                for(l=n-1;l>k;l--)
                {
                    if(nums[l]>nums[k])
                    break;
                }
                swap(nums[k],nums[l]);
                reverse(nums.begin()+k+1,nums.end());
            }
    }
};