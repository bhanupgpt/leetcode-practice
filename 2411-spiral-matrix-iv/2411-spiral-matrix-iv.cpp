/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int i=0, j=0, cur_d = 0;
        vector<pair<int, int>> movement = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        vector<vector<int>> res (m, vector<int> (n, -1));
        int newi = i, newj = j;
        while(head != nullptr) {
            res[i][j] = head->val;
            newi = i + movement[cur_d].first;
            newj = j + movement[cur_d].second;

            if(newi < 0 || newj < 0 || newi >= m || newj >= n || res[newi][newj] != -1) {
                cur_d = (cur_d + 1) % 4;
            }

            i += movement[cur_d].first;
            j+= movement[cur_d].second;
            
            head = head->next;
        }

        return res;
    }
};