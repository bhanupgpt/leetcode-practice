class Solution {
public:
    int reverse(int x) {
        int max = 2147483647, min = -2147483648, ans = 0;
        while(x) {
            int digit = x % 10;
            if (ans > max/10 || (ans == max / 10 && digit >= INT_MAX % 10) || ans < min/10 || (ans == min / 10 && digit <= min % 10)) return 0;            
            x /= 10;            
            cout << ans;
            ans = ans*10 + digit;
        }
        return ans;
    }
};