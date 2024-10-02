//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    string compareFrac(string str) {

        // Code here
        int val1 = 0, val2 = 0, val3 = 0, val4 = 0;
        bool flag1 = false, flag2 = false, flag3 = false;
        string temp = "";
        
        for(int i = 0; i < str.size(); i++){
            if(!flag1 && str[i] == '/'){
                val1 = stoi(temp);
                flag1 = true;
                temp = "";
                continue;
            }
            else if(flag1 && !flag2 && str[i] == ','){
                val2 = stoi(temp);
                flag2 = true;
                temp = "";
                continue;
            }
            else if(flag1 && flag2 && !flag3 && str[i] == '/'){
                val3 = stoi(temp);
                flag3 = true;
                temp = "";
                continue;
            }
            else if(str[i] == ' ') continue;
            else temp += str[i];
        }
        val4 = stoi(temp);
        
        int res1 = val1*val4;
        int res2 = val3*val2;
        
        string ans1 = "";
        ans1 += to_string(val1);
        ans1 += "/";
        ans1 += to_string(val2);
        
        string ans2 = "";
        ans2 += to_string(val3);
        ans2 += "/";
        ans2 += to_string(val4);
        
        if(res1 == res2) return "equal";
        else if(res1 > res2) return ans1;
        else return ans2;
    }
};


//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends