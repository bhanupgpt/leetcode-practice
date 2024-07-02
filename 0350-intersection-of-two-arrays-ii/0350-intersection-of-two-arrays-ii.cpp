class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector <int> result;
        int arr1[1001] = {0};
        int arr2[1001] = {0};
        for(int i=0; i<nums1.size(); i++) {
            arr1[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++) {
            arr2[nums2[i]]++;
        }

        for(int i=0; i<1001; i++) {
            if(arr1[i] != 0 && arr2[i] != 0) {
                int count = min(arr1[i], arr2[i]);

                while(count --) {
                    result.push_back(i);
                }
            }
        }

        return result;
    }
};