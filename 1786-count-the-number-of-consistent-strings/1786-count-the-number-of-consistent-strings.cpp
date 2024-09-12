class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int n = allowed.size(), count = 0;
        for(int i=0; i<words.size(); i++) {
            bool isAllowed= true;
            for(int j=0; j<words[i].size(); j++) {
                bool flag = false;
                for(int k=0; k<n; k++) {
                    if(allowed[k] == words[i][j]) {
                        flag = true;
                        break;
                    }
                }

                if(!flag) {
                    isAllowed = false;
                    break;
                }
            }
            if(isAllowed) count++;
        }

        return count;
    }
};