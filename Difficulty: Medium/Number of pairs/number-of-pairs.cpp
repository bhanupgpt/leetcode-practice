//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long countPairs(vector<int> &arr, vector<int> &brr) {
        // Your Code goes here.
         // x^y=y^x
        // ylogx>xlogy
        // y/log(y)>x/log(x);
        vector<long double>al,bl;
        for(auto it:arr){
            al.push_back((1.0l*it)/(log2(it)));
        }
        
        for(auto it:brr){
            bl.push_back((1.0l*it)/(log2(it)));
        }
        sort(al.begin(),al.end());
        sort(bl.begin(),bl.end());
        long long ans=0,n=al.size();
      
        for(int i=0;i<bl.size();i++){
            int x=lower_bound(al.begin(),al.end(),bl[i])-al.begin();
            ans+=x;
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        vector<int> ex;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            ex.push_back(num);
        a = ex;
        getline(cin, input);
        ss.clear();
        ss.str(input);
        int num2;
        while (ss >> num2)
            b.push_back(num2);

        Solution ob;
        cout << ob.countPairs(a, b) << endl;
    }
}
// } Driver Code Ends