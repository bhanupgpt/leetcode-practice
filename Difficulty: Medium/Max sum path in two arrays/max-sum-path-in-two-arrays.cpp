//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maxPathSum(vector<int> &arr1, vector<int> &arr2) {
        // Code here
        int m = arr1.size(),  n = arr2.size();
        int i = 0, j = 0, sumi = 0, sumj = 0, sum = 0;
        while(i < m && j < n) {
            if(arr1[i] < arr2[j]) {
                sumi += arr1[i]; 
                i++;
            }
            else if(arr1[i] > arr2[j]) {
                sumj += arr2[j];
                j++;
            }
            else if(arr1[i] == arr2[j]) {
                sum += (max(sumi, sumj) + arr1[i]);
                i++;
                j++;
                sumi = 0; sumj = 0;
            }
        }
        
        while(i < m) {
            sumi += arr1[i];
            i++;
        }
        while(j < n) {
            sumj += arr2[j];
            j++;
        }
        
        return sum + max(sumi, sumj);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr1;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr1.push_back(number);
        }
        vector<int> arr2;
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            arr2.push_back(number2);
        }
        Solution ob;
        long long ans = ob.maxPathSum(arr1, arr2);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends