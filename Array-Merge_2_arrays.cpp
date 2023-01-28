// we make a gap variable =ceil((float) m+n/2)
// we concatinate the 2 arrays as they are so that we only have to deal with one array that is a1
// we run a loop while(gap>0)
// in this loop we traverse the a1 array from 2 positions 1 is from the start(i=0) and other is from the gap position (i.e if the gap is 4 then j =4). if we find that a1[i]>a1[j] then we swap them and increment both i and j by 1 ;
// after j goes out of bounds we reset gap to be half of what it was earlier unless its 1 then its set to 0 .
// eg if gap starts with 4 then becomes 2 then 1 and then 0 

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,gap=ceil((float)(m+n)/2);
        for(int i=0;i<n;i++){
            nums1[m+i]=nums2[i];
        }
        while(gap>0){
            for(int i=0,j=gap;j<m+n;j++,i++){
                if(nums1[i]>nums1[j])swap(nums1[i],nums1[j]);
            }    
            if(gap==1)gap=0;
            else gap=ceil((float)gap/2);
        }
        
    }
};