class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int max_sub = 0;
        int ans = 0;
        for(int i=prices.size()-1;i>=0;i--){
            ans = max(max_sub-prices[i],ans);
            max_sub = max(prices[i],max_sub);
        }
        return ans;
    }
};