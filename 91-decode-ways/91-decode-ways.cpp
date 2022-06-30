class Solution {
public:
    int numDecodings(string s) {
        int dp[s.length()][2];
        dp[0][0] = s[0] == '0' ? 0 : 1;
        dp[0][1] = 0;
        int n = s.size();
        for (int i = 1; i < n; i++)
        {
            if (s[i] == '0')
                dp[i][0] = 0;
            else
                dp[i][0] = dp[i - 1][0] + dp[i - 1][1];
            if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] < '7'))
                dp[i][1] = dp[i - 1][0];
            else
                dp[i][1] = 0;
        }
        return dp[n - 1][0] + dp[n - 1][1];
        
    }
};