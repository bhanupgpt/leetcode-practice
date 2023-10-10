class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int m=nums.size(), i=0,j=0;
        int ans=n;
        while(i<m){
            while(j<m && nums[j]-nums[i]<n){
                j++;
            }
            ans=min(ans,n-(j-i));
            i++;
        }
        return ans;
    }
};