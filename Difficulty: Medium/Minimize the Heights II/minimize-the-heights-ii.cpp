//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        if(n==1)
        {
            return 0;
        }
        sort(arr.begin(),arr.end());
        
        int aks = arr[n-1] - arr[0];
        
        int s = arr[0] + k;
        int l = arr[n-1] - k;
        for(int i = 0 ;i<n-1;i++)
        {
            int mini = min(s,arr[i+1] - k);
            int maxi = max(l,arr[i]+k);
            if(mini>=0)
            {
              aks = min(aks,maxi-mini);  
            }
            
        }
        return aks;
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n, k;
        cin >> k;
        cin.ignore();
        vector<int> a, b, c, d;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution ob;
        auto ans = ob.getMinDiff(a, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends