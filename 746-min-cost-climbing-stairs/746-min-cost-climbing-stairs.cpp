class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size() + 1];
        dp[0] = 0;
        dp[1] = cost[0];
        for(int i=2; i<=cost.size(); i++) {
            dp[i] = cost[i-1] + min(dp[i-1], dp[i-2]);
            cout << dp[i] << " ";
        }

        return min (dp[cost.size() - 1], dp[cost.size()]);
    }
};