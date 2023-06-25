class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxi = 0;
        for(int i=0; i<candies.size(); i++) {
            maxi = max(maxi, candies[i]);
        }

        vector <bool> result;
        for(int i=0; i<candies.size(); i++) {
            if(candies[i] + extraCandies >= maxi) result.push_back(true);
            else result.push_back(false);
        }

        return result;
    }
};