//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &a, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &a[i]);
        }
    }

    template <class T>
    static void print(vector<T> &a) {
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends

class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &arr, vector<int> &brr) {
        // Create a vector of tuples containing (difference, arr[i], brr[i], index)
        vector<tuple<int, int, int, int>> tips_diff;
        for (int i = 0; i < n; ++i) {
            tips_diff.push_back(make_tuple(abs(arr[i] - brr[i]), arr[i], brr[i], i));
        }

        // Sort the vector by the absolute difference in tips in descending order
        sort(tips_diff.begin(), tips_diff.end(), [](const tuple<int, int, int, int> &a, const tuple<int, int, int, int> &b) {
            return get<0>(a) > get<0>(b);
        });

        long long total_tips = 0;
        int a_orders = 0;
        int b_orders = 0;

        // Iterate through the sorted list and assign orders to maximize tips
        for (const auto &tip : tips_diff) {
            int diff = get<0>(tip);
            int tip_a = get<1>(tip);
            int tip_b = get<2>(tip);
            int index = get<3>(tip);

            // Assign the order to A if A's tip is greater or equal and A can take more orders, or if B has reached their limit
            if ((tip_a >= tip_b && a_orders < x) || b_orders == y) {
                total_tips += tip_a;
                a_orders++;
            } else {
                // Otherwise, assign the order to B
                total_tips += tip_b;
                b_orders++;
            }
        }

        return total_tips;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        vector<int> arr(n);
        Array::input(arr, n);

        vector<int> brr(n);
        Array::input(brr, n);

        Solution obj;
        long long res = obj.maxTip(n, x, y, arr, brr);

        cout << res << endl;
    }
}

// } Driver Code Ends