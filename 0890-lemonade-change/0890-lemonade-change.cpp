class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int change5 = 0, change10 = 0, change20 = 0;
        for(int i=0; i<bills.size(); i++) {
            if(bills[i] == 5) {
                change5++;
            }
            else if(bills[i] == 10) {
                change10++;
                change5--;
                if(change5 < 0) return false;
            }
            else if(bills[i] == 20) {
                change20++;
                if(change10 > 0 && change5 > 0) {
                    change10--;
                    change5--;
                }
                else if(change5 >= 3) {
                    change5 -= 3;
                }
                else {
                    return false;
                }
            }
            


        }
        return true;
    }
};