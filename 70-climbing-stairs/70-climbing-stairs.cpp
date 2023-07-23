class Solution {
public:
    int count = 0;
    int climbStairs(int n) {
        if(n == 0) return 1;
        if(n == 1) return 1;
        // if(n == 2) return 2;
        // fibonacci

        // return climbStairs(n-1) + climbStairs(n-2);
        vector <int> dp;
        int prev = 1;
        int prev_prev = 1;
        int ans;
        for(int i=2; i<n; i++) {
            ans = prev + prev_prev;
            prev_prev = prev;
            prev = ans;
        }
        return prev + prev_prev;
    }
};