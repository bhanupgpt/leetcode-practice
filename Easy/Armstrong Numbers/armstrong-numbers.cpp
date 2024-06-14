//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int t = n;
        int one = n%10;
        n = n/ 10;
        int two = n%10;
        n = n / 10;
        int three = n%10;
        // cout << n << " k " << one << two << three;
        if(one*one*one + two*two*two + three*three*three == t) {
            return "true";
        }
        return "false";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends