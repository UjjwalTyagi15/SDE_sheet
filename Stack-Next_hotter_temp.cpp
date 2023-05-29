class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        stack<pair<int,int>>st;
        vector<int> ans(temp.size());
        for(int i=0;i<temp.size();i++)
        {
            while(!st.empty() && st.top().first<temp[i]){
                ans[st.top().second]=i-st.top().second;
                st.pop();
            }
            // pair<int,int> p=make_pair(temp[i],i);
            st.push({temp[i],i});
        }
        return ans;
    }
};