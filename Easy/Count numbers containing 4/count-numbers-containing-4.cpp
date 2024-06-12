//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int countNumberswith4(int n) {
        // code here
         if(n<4){
            return 0;
        }
        int cnt=0;
        for(int i=4; i<=n; i++){
            int num=i;
            while(num!=0){
                int rem=num%10;
                if(rem==4){
                    cnt++;
                    break;
                }
                num =num/10;
            }
        }
        return cnt;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.countNumberswith4(n);

        cout << res << endl;
    }
}

// } Driver Code Ends