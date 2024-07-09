class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double sum = 0;
        int time = 0;
        for(int i=0; i<customers.size(); i++) {
            if(customers[i][0] >= time) {
                sum += customers[i][1];
                time = customers[i][0] + customers[i][1];
            }
            else {
                sum += time + customers[i][1] - customers[i][0];
                time += customers[i][1];
            }
        }

        return double (sum / customers.size());
    }
};