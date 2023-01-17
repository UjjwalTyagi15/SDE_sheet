// transpose the matrix by using two loops where first loop i goes from 0 to n and in nested loop j goes from 0 to i not m . swap matrix [i][j] and matrix[j][i]. after traversal once iterate and reverse each row one by one .


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++)
            swap(matrix[i][j],matrix[j][i]);
        }

        for(int i=0;i<n;i++)
        reverse(matrix[i].begin(),matrix[i].end());


    }
};