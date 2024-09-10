class Solution {
public:
    // int dp(vector<int>& nums, int i) {
    //     if()

    //     int include = 
    //     return max(include, exclude);
    // }

    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        for(auto it: nums){
            sum += it;
            maxi = max(sum,maxi);
            if(sum<0) sum = 0;
        }
        return maxi;
    }
};