// simply take two numbers and two counters cause only 2 numbers can be more than 1/3 . 

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> ans;
        int count1=0;
        int count2=0;
        int n1=-1,n2=-1;
        
        for(int i=0;i<nums.size();i++){
            if(n1==nums[i])count1++;
            else if(n2==nums[i])count2++;
            else if(count1==0){
                n1=nums[i];
                count1=1;
            }
            else if(count2==0 ){
                
                n2=nums[i];
                count2=1;
            }
            else {
                count1--;
                count2--;
            }
            cout<<count1<<" "<<count2<<endl;
        }
        count1=0;
        count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n1)count1++;
            if(nums[i]==n2)count2++;
        }


        if(count1>nums.size()/3)ans.push_back(n1);
        if(count2>nums.size()/3 && n1!=n2)ans.push_back(n2);
        return ans;
    }
};