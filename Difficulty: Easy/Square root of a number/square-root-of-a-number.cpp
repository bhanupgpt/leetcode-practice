//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        // Your code goes here
        long long int l = 0 , r = n, ans = n;
       while(l <= r){
           long long int mid =(l+r)/2;
           if(mid*mid ==n) return mid;
           if(mid*mid < n){
               ans = mid;
               l = mid+1;
           }else{
               r = mid-1;
           }
           
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;
    }
    return 0;
}

// } Driver Code Ends