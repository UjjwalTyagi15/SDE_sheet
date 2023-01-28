// Do same as merge sort but in every merge function run a loop for every i and move j till nums[i]>2*(long)nums[j] and increment count as j-mid+1 value ;
// apply merge sort as it is after that 
// return count


class Solution {
public:
    int merge(vector<int>& nums,vector<int>&temp,int low,int mid,int high){
        int count=0;
        int j=mid+1;
        int k=low;
       for(int i=low;i<=mid;i++){
           while(j<=high && nums[i]>2*(long)nums[j] )j++;
            
       count+=j-(mid+1);
       }
        int i=low;
        j=mid+1;
        

        while(i<=mid&&j<=high){
            if(nums[i]<nums[j])
            temp[k++]=nums[i++];
            else temp[k++]=nums[j++];
        }
        while(i<=mid)temp[k++]=nums[i++];
        while(j<=high)temp[k++]=nums[j++];

        for(i = low ; i <= high ; i++)
        nums[i] = temp[i];


        return count;

    }

    int mergesort(vector<int>& nums,vector<int>&temp,int low,int high){
       int inv=0;
        if(low<high){
            int mid=(low+high)/2;
            inv+=mergesort(nums,temp,low,mid);
            inv+=mergesort(nums,temp,mid+1,high);
            inv+=merge(nums,temp,low,mid,high);
            return inv;
        }
        return inv;
    }

    int reversePairs(vector<int>& nums) {
        vector<int> temp(nums.size());
        return  mergesort(nums,temp,0,nums.size()-1);

    }
};