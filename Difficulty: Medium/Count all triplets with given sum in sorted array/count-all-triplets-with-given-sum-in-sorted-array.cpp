//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int countTriplets(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(), arr.end());
    int cnt = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            int sum = arr[i] + arr[j];
            int third = target - sum;

            // Count all occurrences of `third` in the array
            int low = j + 1, high = arr.size() - 1;
            while (low <= high) {
                int mid = low + (high - low) / 2;
                if (arr[mid] == third) {
                    // Count duplicates of `third`
                    int left = mid, right = mid;
                    while (left >= j + 1 && arr[left] == third) left--;
                    while (right <= arr.size() - 1 && arr[right] == third) right++;
                    cnt += (right - left - 1);
                    break;
                } else if (arr[mid] < third) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }
    }
    return cnt;
    }
};

//{ Driver Code Starts.

vector<int> lineArray() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector<int> arr;
    int num;
    while (ss >> num) {
        arr.push_back(num);
    }
    return arr;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr = lineArray();
        int target;
        cin >> target;
        cin.ignore();

        Solution ob;
        int res = ob.countTriplets(arr, target);
        cout << res << endl;
        cout << "~" << endl;
    }
}

// } Driver Code Ends