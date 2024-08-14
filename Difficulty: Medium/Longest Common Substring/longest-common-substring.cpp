//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
        int ans=-1;
        for(int i=0;i<str1.length();i++)
        {
            int size=0;
            int newi=i;
            int j=0;
            while(j<str2.length()&&newi<str1.length())
            {
                if(str1[newi]==str2[j])
                {
                    size++;
                    j++;
                    newi++;
                    ans=max(size,ans);
                }
                else
                {
                    newi=i;
                    size=0;
                    j++;
                }
            }
           
            ans=max(size,ans);
        }
        for(int i=0;i<str2.length();i++)
        {
            int size=0;
            int newi=i;
            int j=0;
            while(j<str1.length()&&newi<str2.length())
            {
                if(str2[newi]==str1[j])
                {
                    size++;
                    j++;
                    newi++;
                    ans=max(size,ans);
                }
                else
                {
                    newi=i;
                    size=0;
                    j++;
                }
            }
           
            ans=max(size,ans);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends