class Solution {
public:
    int n;
    vector<vector<int>> ans;

    void solve(int i,vector<int>&v ,int target, vector<int> &ds){
        if(target == 0){
            ans.push_back(ds);
            return;
        }
        
        if(i>=n || target <0) return;

        if(target - v[i]>=0){
            ds.push_back(v[i]);
            solve(i,v,target-v[i],ds);
            ds.pop_back();
        }

        solve(i+1,v,target,ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        n = v.size();
        vector<int> ds;
        solve(0,v,target,ds);
        return ans;
    }
};