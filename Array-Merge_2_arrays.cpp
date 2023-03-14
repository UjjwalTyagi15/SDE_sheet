// take 3 pointer . pointing to end of 1st array(i),end of second array(j),end of merged array which is basically to be accomodated in 1st array(k)
// now we start comparing from the end and whichever is greater in value gets placed in k and its index gets decremented . keep doing it untill i or j reaches 0 
// if by chance any element in arr 2 are left then simply add them behind the arr1 as they are as all the comparisons are made already 



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else {
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
        while(j>=0){
            nums1[k--]=nums2[j--];
        }

        return ;
    }
};