class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        // for(int i=0; i<=n; i++) {
        //     int sum = 0;
        //     int  num = i;
        //     while(num) {
        //         if(num%2) sum++;
        //         num = num >> 1;
        //     }
        //     ans.push_back(sum);
        // }
        // soln 2
        ans.push_back(0);
        // ans.push_back(1);
        int k = 1;
        for(int i=1; i<=n; i++) {
            if(i == k*2) k *= 2;
            ans.push_back(ans[i-k] + 1);
        }

        
        return ans;
    }
};