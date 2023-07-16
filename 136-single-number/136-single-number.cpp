class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xoro = 0;
        for(int i=0; i<nums.size(); i++) {
            xoro = nums[i] ^ xoro;
        }

        return xoro;
    }
};