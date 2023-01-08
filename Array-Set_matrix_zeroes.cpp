// traverse the whole matrix once and if u find any zeroes then  make the corresponding block in first column and first row also zero. also if the zero is found in first row or col itself then mark the iscol,isrow bool as true so. now in second traversal if the first row or col has a zero in the corresponding place then make the block zero . at last if isrow=1 then make row 1 =0 , if iscol=1 then make col 1=0



#include<bits/stdc++.h>
#include<vector>

class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
       
        int m=a.size();
        int n=a[0].size();
       bool isrow=false;
       bool iscol=false;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++){
                if (a[i][j]==0)
                {
                    a[0][j]=0;
                    a[i][0]=0;
                    if(i==0)isrow=true;
                    if(j==0)iscol=true;
                }
            }
    
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++){
                if(a[0][j]==0 || a[i][0]==0)a[i][j]=0;
            }
        if(isrow) for(int i=0;i<n;i++)a[0][i]=0;    
        if(iscol) for(int i=0;i<m;i++)a[i][0]=0;
    }
};


