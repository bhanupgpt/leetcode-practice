class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        // while(n != 0) {
        //     if(n%2 == 1) {
        //         count++;
        //     }
        //     n = n >> 1;
        // }
        
        while (n) {
            n = n & (n - 1);
            count++;
        }

        return count;
    }
};