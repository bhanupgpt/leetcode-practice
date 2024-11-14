//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void nearlySorted(vector<int>& arr, int k) {
        // code
        // Min-Heap to hold at most k+1 elements, as each element is within k range of its sorted position.
        priority_queue<int, vector<int>, greater<int>> pq;

        int i = 0, n = arr.size();

        // Step 1: Initialize the heap with the first k+1 elements.
        for (i = 0; i <= min(n - 1, k); ++i) {
            pq.push(arr[i]);
        }

        int idx = 0; // This will track the sorted position in arr.

        // Step 2: Iterate through the array and build the sorted order.
        while (!pq.empty() && idx < n) {
            // Pop the minimum element from the heap and place it at the current sorted index.
            arr[idx] = pq.top();
            pq.pop();

            // Push the next element from the array into the heap (expanding the sliding window).
            if (i < n) {
                pq.push(arr[i++]);
            }
            
            ++idx; // Move to the next sorted index.
        }
    }
};

//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        Solution obj;
        obj.nearlySorted(arr, k);
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends