//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int sum = 0;
        for(int i=0; i<arr.size(); i++) {
            sum += arr[i];
        }
        if(sum % 2) return false;
        int target = sum / 2;
        int t1 = 0, t2 = 0;
        int i = 0, j = arr.size() - 1;
        while(i <= j) {
            if(t1 == t2 && t1 == target) return true;
            else if(t1 > t2) {
                t2 += arr[j];
                j--;
                
            }
            else {
                t1 += arr[i];
                i++;
            }
        }
        if(t1 == t2) return true;
        
        return false;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t-- > 0) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }

        Solution obj;
        bool res = obj.canSplit(arr);
        cout << (res ? "true" : "false") << endl;
    }
    return 0;
}
// } Driver Code Ends