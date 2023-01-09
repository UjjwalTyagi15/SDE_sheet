// make a 2d empty ans vector.start iterating from 1 to the number of rows (including rows) .in each iteration make a vector of all 1s sized equal to the row's number . iterate that vector from index 1 to second last index and fill jth index with j-1th and jth index of last row .w

#include<bits/stdc++.h>

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            vector<int> row(i,1);
            for(int j=1;j<i-1;j++)
                {
                    row[j]=(ans[i-2][j-1]+ans[i-2][j]);
                }   
           
            ans.push_back(row);
        }
        return ans;
     }
};