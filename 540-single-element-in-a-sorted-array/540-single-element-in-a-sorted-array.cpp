class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;
        if(high == 0) return nums[0];
        else if (nums[0] != nums[1]) return nums[0];
        else if(nums[high] != nums[high-1]) return nums[high];
        low++; high--;
        while(low <= high) {
            int mid = (low+high) / 2;
            if((mid%2==0 && nums[mid-1]==nums[mid]) || (mid%2!=0 && nums[mid+1]==nums[mid])) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }


        }
        return nums[low-1];
    }
};