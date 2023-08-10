//{ Driver Code Starts
#include<bits/stdc++.h>
const int mod=1e9+7;
using namespace std;

// } Driver Code Ends
// function to find longest common subsequence

class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        vector<vector<int>> dp(n+1, vector<int>(m+1, 0));
        int inc, opt1, opt2, opt3;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1]){
                  inc=1+dp[i-1][j-1];
                  // cout <<s1[i] << " @#"<< endl;
                } 
                else inc=0;
                opt1=dp[i-1][j]; opt2=dp[i][j-1];
                opt3=dp[i-1][j-1];
                dp[i][j]=max(opt1, max(opt2, max(opt3, inc)));
            }
        }
        return(dp[n][m]);
    }
    
    int lcsTab(int n, int m, string s1, string s2)
    {
        // your code here
        // base case
        if(n==0||m==0) return(0);
        
        int include=0, exclude=0;
        if(s1[n]==s2[m])
        {
            include=1+ lcs(n-1, m-1, s1, s2);
        }
        
        int opt1=lcs(n-1, m, s1, s2);
        int opt2=lcs(n, m-1, s1, s2);
        int opt3=lcs(n-1, m-1, s1, s2);
        
        return(max(opt1, max(opt2, max(opt3, include))));
    }
};


//{ Driver Code Starts.
int main()
{
    int t,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;          // Take size of both the strings as input
        string s1,s2;
        cin>>s1>>s2;        // Take both the string as input
        Solution ob;
        cout << ob.lcs(n, m, s1, s2) << endl;
    }
    return 0;
}

// } Driver Code Ends