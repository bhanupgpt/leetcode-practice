//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int j=0;
        int ans=0;
        unordered_set<char>st;
        for(int i=0;i<s.length();i++){
            
               while(st.find(s[i])!=st.end())
               st.erase(s[j++]);
            
            st.insert(s[i]);
            ans=max(ans,(int)st.size());
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {

        Solution obj;
        string s;
        cin >> s;
        cout << obj.longestUniqueSubstr(s) << endl;
        cout << "~"
             << "\n";
    }

    return 0;
}

// } Driver Code Ends