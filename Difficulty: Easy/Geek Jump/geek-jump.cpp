//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
//   int solve(vector<int>& height, int n, int i) {
//       if(i > n-1 ){
//           return 0;
//       }
      
      
//       int ans = height[i] + min(solve(height, n, i+1), solve(height, n, i+2));
//       return ans;
//   }
    int minimumEnergy(vector<int>& height, int n) {
        // Code here
        if(n==1) return 0;
        vector<int> arr(n, 0);
        arr[0] = 0;
        arr[1] = abs(height[1] - height[0]);
        for(int i=2; i<n; i++){
            arr[i] = min(arr[i-2]+abs(height[i]-height[i-2]), arr[i-1]+abs(height[i]-height[i-1]));
            
        }
        return arr[n-1];
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.minimumEnergy(arr, N) << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends