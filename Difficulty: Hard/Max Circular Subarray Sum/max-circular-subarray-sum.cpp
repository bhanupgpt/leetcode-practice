//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
    int circularSubarraySum(vector<int> &arr) {

        // your code here
        int n = arr.size();
        
        int maxKadane = INT_MIN, currentMax = 0;
        
        int minKadane = INT_MAX, currentMin = 0;
        int totalSum = 0;
        
        for(int i=0; i<n; i++)
        {
            currentMax = max(arr[i], currentMax + arr[i]);
            maxKadane = max(maxKadane, currentMax);
            
            currentMin = min(arr[i], currentMin + arr[i]);
            minKadane = min(minKadane, currentMin);
            
            totalSum += arr[i];
        }
        
        if(maxKadane < 0)
            return maxKadane;
            
        return max(maxKadane, totalSum - minKadane);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;

        // Read first array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        int res = ob.circularSubarraySum(arr);

        cout << res << endl;
    }
    return 0;
}

// } Driver Code Ends