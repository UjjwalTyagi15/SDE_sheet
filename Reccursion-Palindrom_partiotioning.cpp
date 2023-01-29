class Solution {
public:
    bool ispalindrom(string s ,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--])
            return false;
        }
        return true;
    }
    void helper(string &s , vector<string> & temp, vector<vector<string>> & ans , int i){
        if(i==s.size()){
            ans.push_back(temp);
            return;
        }
        else {
            for(int j=i;j<s.size();j++){
                if(ispalindrom(s,i,j)){
                    temp.push_back(s.substr(i,j-i+1));
                    helper(s,temp,ans,j+1);
                    temp.pop_back();
                }
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<string> temp;
        vector<vector<string>>ans;
        helper(s,temp,ans,0);
        return ans;
    }
};