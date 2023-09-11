class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map <int, vector<int>> mp;
        vector <vector <int>> ans;

        for(int i=0; i<groupSizes.size(); i++) {
            int temp_size = groupSizes[i];
            mp[temp_size].push_back(i);
            if(mp[temp_size].size() == temp_size) {
                ans.push_back(mp[temp_size]);
                mp[temp_size].clear();
            }
        }

        return ans;
    }
};