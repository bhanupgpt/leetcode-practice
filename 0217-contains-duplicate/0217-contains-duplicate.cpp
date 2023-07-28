class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 1;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++) {
            // cout << nums[i] << " ";
            if(count>1) return true;
            else if(nums[i] == nums[i-1]) {
                count++;
            }
            else if(nums[i] != nums[i-1]) count = 1;
        }
        if(count > 1) return true;
        return false;
        
    }
};