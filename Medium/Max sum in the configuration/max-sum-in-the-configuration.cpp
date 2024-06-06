//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method*/
class Solution {
  public:
    long long max_sum(int a[], int n) {
    long long current_possible_ans = 0, total_sum= 0;
    for(int i = 0; i < n; ++i) {
        total_sum+= a[i];
        current_possible_ans += 1LL * a[i] * i;
    }
        
    long long ans = INT64_MIN;
    for(int i = 0; i < n; ++i) {
        long long change = total_sum - 1LL * n * a[n-1-i];
        current_possible_ans += change;
        ans = max(ans, current_possible_ans );
    }
        
    return ans;
}
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        Solution ob;
        cout << ob.max_sum(A, N) << endl;
        /*keeping track of the total sum of the array*/
    }
}

// } Driver Code Ends