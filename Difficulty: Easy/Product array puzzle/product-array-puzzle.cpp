//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums) {

        // code here
        long long int product = 1;
        int n = nums.size(), zeroes = 0;
        for(int i=0; i<n; i++) {
            if(nums[i] != 0){
                product *= nums[i];
            }            
            else {
                zeroes++;
            }
            // cout << product << endl;
        }
        vector <long long int> ans;
        for(int i=0; i<n; i++) {
            if(zeroes == 1 && nums[i] == 0) {
                ans.push_back(product);
                
            }
            else if(zeroes >= 1) {
                ans.push_back(0);
            }
            
            else {
                ans.push_back(product / nums[i]); 
            }
            // cout << ans[i] << endl;
            
        }

        
        return ans;
        
    }
};


//{ Driver Code Starts.
int main() {
    int t; // number of test cases
    cin >> t;
    while (t--) {
        int n; // size of the array
        cin >> n;
        vector<long long int> arr(n), vec(n);

        for (int i = 0; i < n; i++) // input the array
        {
            cin >> arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr); // function call

        for (int i = 0; i < n; i++) // print the output
        {
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends