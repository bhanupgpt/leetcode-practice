class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int sum = mean * (n+rolls.size());
        int sum_m = 0;
        for(int i=0; i<rolls.size(); i++) {
            sum_m += rolls[i];
        }
        int sum_n = sum - sum_m; int mean_n = sum_n / n, mod_n = sum_n %n;
        if(sum_n > 6 * n || sum_n < n) return {};
        vector<int> ans(n, mean_n);
        for(int i=0; i < mod_n; i++) {
            ans[i]++;
        }
        return ans;

    }
};