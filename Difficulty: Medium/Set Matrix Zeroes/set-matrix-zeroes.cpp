//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:

void noofzeros(vector<vector<int>> &mat,vector<pair<int,int>> &rc){
      for(int i=0;i<mat.size();i++){
          for(int j=0;j<mat[i].size();j++){
              if(mat[i][j]==0){
                  rc.push_back(make_pair(i,j));
              }
          }
      }
  }
  void setrow0(vector<vector<int>> &mat,int row){
      fill(mat[row].begin(),mat[row].end(),0);
  }
  void setcol0(vector<vector<int>> &mat,int col){
      for(int j=0;j<mat.size();j++){
          mat[j][col]=0;
      }
  }
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        vector<pair<int,int>> rc;
        noofzeros(mat,rc);
        
        for(int i=0;i<rc.size();i++){
            setcol0(mat,rc[i].second);
            setrow0(mat,rc[i].first);
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int> > arr(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        Solution ob;
        ob.setMatrixZeroes(arr);
        for (auto x : arr) {
            for (auto y : x)
                cout << y << " ";
            cout << endl;
        }

        cout << "~"
             << "\n";
    }
    return 0;
}

// } Driver Code Ends