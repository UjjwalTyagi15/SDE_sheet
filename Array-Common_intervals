// first sort the vector intervals and then start an iteration from 0 to n-2 index(second last index) . first check if the current index and the next index have any common interval by comparing the second value of current and first value of next interval . if not then increment i else . make the current intervals first value as minimum of first value of both intervals and second value as max of second value of both intervals . now remove the second interval.

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int i=0;
        while(i<intervals.size()-1){
            if(intervals[i][1]<intervals[i+1][0])
            i++;
            else{
                intervals[i][0]=min(intervals[i][0],intervals[i+1][0]);
                intervals[i][1]=max(intervals[i][1],intervals[i+1][1]);
                intervals.erase(intervals.begin()+i+1);
            }
        }
        return intervals;
    }
};