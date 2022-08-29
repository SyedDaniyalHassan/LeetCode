class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int curr_max = 0;
        int ans = 0;
        for(int i=prices.size()-1;i>=0;i--){
            ans = max(curr_max-prices[i],ans);
            curr_max = max(prices[i],curr_max);
        }
        return ans;
    }
};