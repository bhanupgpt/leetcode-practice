class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        if(nums.size() == 0) return {-1, -1};
        else if(nums.size() == 1 && target == nums[0]) return {0, 0};
        int lower = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int upper = lower_bound(nums.begin(), nums.end(), target+1) - nums.begin() - 1;

        if(lower < nums.size() && upper < nums.size() && nums[lower] == target) return {lower, upper};
        return {-1, -1};
    }
};