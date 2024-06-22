//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long ExtractNumber(string sentence) {

        // code here
        long long ans = -1;
        int i=0;
        long long num= 0;
        long long num2= 0;
        int flag = 1;
        
        while(i < sentence.size()){
            if(sentence[i]>='0' && sentence[i]<='9' && (i==0 || sentence[i-1]==' ')){
                while((i<sentence.size() && sentence[i]!=' ')){
                    if(sentence[i] == '9'){
                        if(sentence[i-1]!=' '){
                            num2 = 0;
                        }
                        break;
                        flag = 0;
                    }
                    if(flag == 1){
                        num2 = (num2*10) + (sentence[i]-'0');
                    }
                    i++;
                }
                num = max(num,num2);
                num2 = 0;
            }
            flag = 1;
            i++;
        }
        if(num != 0){
            return num;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);

        Solution ob;
        cout << ob.ExtractNumber(s) << "\n";
    }

    return 0;
}

// } Driver Code Ends