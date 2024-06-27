class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int a = edges[0][0];
        int b = edges[0][1];
        int count_a = 1, count_b = 1;
        for(int i=1; i<edges.size(); i++) {
            if(a == edges[i][0] || (a == edges[i][1])) {
                count_a++;
            }
            if(b == edges[i][0] || (b == edges[i][1])) {
                count_b++;
            }
        }

        if(count_a >= edges.size()) {
            return a;
        }
        else return b;
    }
};