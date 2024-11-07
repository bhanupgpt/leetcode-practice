//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
         long sum=accumulate(arr.begin(),arr.end(),0ll);
        if(sum%3)return {-1,-1};
        int val=sum/3;
        int first=-1,second=-1;
        for(int i=0;i<arr.size();i++){
            val-=arr[i];
            if(val==0){
                if(first==-1)first=i;
                else if(second==-1)second=i;
                val=sum/3;
            }
            if(val<0){
                return {-1,-1};        
            }
            
        }
        return {first,second};
    }
};

//{ Driver Code Starts.

int main() {
    int test_cases;
    cin >> test_cases;
    cin.ignore();
    while (test_cases--) {
        string input;
        vector<int> arr;

        // Read the array from input line
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        // Solution instance to invoke the function
        Solution ob;
        vector<int> result = ob.findSplit(arr);

        // Output result
        if (result[0] == -1 && result[1] == -1) {
            cout << "false" << endl;
        } else {
            cout << "true" << endl;
        }
    }
    return 0;
}

// } Driver Code Ends