//{ Driver Code Starts
// Initial function template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isPossible(vector<int>&arr,int k,int mid){
      int cnt=1;
      int sum=0;
      for(int i=0;i<arr.size();i++){
          if(sum+arr[i]>mid){
              sum=arr[i];
              cnt++;
          }
          else
          sum+=arr[i];
      }
      return cnt<=k;
  }
    int findPages(vector<int> &arr, int k) {
        if(k>arr.size())
        return -1;
       int low=*max_element(arr.begin(),arr.end());
       int high=accumulate(arr.begin(),arr.end(),0);
       int ans=-1;
       while(low<=high){
           int mid=(low+high)/2;
           if(isPossible(arr,k,mid)){
           high=mid-1;
              ans=mid;
           }
           else
               low=mid+1;
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--) {

        int d;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number) {
            crr.push_back(number);
        }
        d = crr[0];
        int n = arr.size();
        Solution ob;
        int ans = ob.findPages(arr, d);
        cout << ans << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends