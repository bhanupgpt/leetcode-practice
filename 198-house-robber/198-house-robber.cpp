class Solution {
public:
    
    // int max_sum(vector <int> &nums, int n, int t[]){
    //     if(n == 0) return 0;
         
    //     for(int i=0; i<n; i++) {
    //         t[i] = max(nums[n-1] + max_sum(nums, n-2, t), max_sum(nums, n-1, t));
    //     }
    //     return t[n-1];
        
    // }


    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        if(nums.size() == 2) return max(nums[0], nums[1]);
        int maxi  = 0;
        int t[nums.size()];
        t[0] = nums[0];
        t[1] = max(nums[0], nums[1]);
        // return max_sum(nums, nums.size(), t);
        for(int i=2; i<nums.size(); i++) {
            cout << nums[i] + t[i-2] << " 2nd   " << t[i-1] << endl;
            
                t[i] = max(nums[i] + t[i-2], t[i-1]);
            
            // else {
            //     t[i] = t[i-1];
            // }
            
        }
        return t[nums.size()-1];
    }
};