class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int i=0, j = n-1;
        while(i<=j) {
            if(num[i] + num[j] == target) {
                return {i+1, j+1};
            }
            else if(num[i] + num[j] > target) {
                j--;
            }
            else if(num[i] + num[j] < target) {
                i++;
            }
        }

        return {-1, -1};
    }
};