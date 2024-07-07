class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int drank = numBottles, empty = numBottles;
        while(empty / numExchange) {
            int exchange = empty / numExchange;
            empty -= exchange * numExchange;
            drank += exchange;
            empty += exchange;

        }
        return drank;
    }
};