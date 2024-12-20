//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int> ans;
        int row = mat.size();
        int col = mat[0].size();
        
        int count = 0;
        int total = row*col;
        
        
        // index initialization
        int startingRow = 0;
        int endingRow = row-1;
        int startingCol = 0;
        int endingCol = col-1;
        
        while(count < total){
            // print starting row
            for(int i= startingCol; count < total && i <= endingCol; i++){
                ans.push_back(mat[startingRow][i]);
                count++;
            }
            startingRow++;
            
            // print ending column
            for(int i= startingRow; count < total && i <= endingRow; i++){
                ans.push_back(mat[i][endingCol]);
                count++;
            }
            endingCol--;
            
            // print ending row
            for(int i= endingCol; count < total && i >= startingCol; i--){
                ans.push_back(mat[endingRow][i]);
                count++;
            }
            endingRow--;
            
            // print starting column
            for(int i= endingRow; count < total && i >= startingRow; i--){
                ans.push_back(mat[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++) {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends