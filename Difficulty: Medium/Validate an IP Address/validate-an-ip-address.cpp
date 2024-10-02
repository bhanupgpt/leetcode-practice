//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
        // code here
        if(count(str.begin(), str.end(), '.') != 3){
            return 0;
        }
        
        if(str[str.size() - 1] == '.')
            return 0;
        
        stringstream ss(str);
        string token;
        while(getline(ss, token, '.')){
            
            if(token.size() == 0 || token.size() > 3)
               return 0;
            
            for(char c : token) if(!isdigit(c)) return 0;
            
            if(stoi(token) > 255)
               return 0;
            
            if(token[0] == '0' and token.size() != 1)
               return 0;
            
        }
        
        return 1;
        
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends