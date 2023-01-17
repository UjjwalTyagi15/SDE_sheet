// make a variable mini which tells us the minimum number we have encountered so far . and profit which accounts to the max profit we have made so far . traverse the array from start to end . and in each iteration change mini to min of mini and a[i]. profit is max of profit and difference betweet a[i] and mini; return profit



class Solution {
public:
    int maxProfit(vector<int>& a) {
        int mini=INT_MAX,profit=0;
        for(int i=0;i<a.size();i++){
            mini=min(mini,a[i]);
            profit=max(profit,a[i]-mini);
        }
        return profit;
    }
};