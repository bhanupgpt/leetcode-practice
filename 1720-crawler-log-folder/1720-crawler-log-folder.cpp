class Solution {
public:
    int minOperations(vector<string>& logs) {
        int score = 0;
        for(int i=0; i<logs.size(); i++) {
            if(logs[i] == "../") {
                if(score != 0) score -= 1;
                
            }
            else if(logs[i] == "./") {
                score += 0;
            }
            else {
                score += 1;
            }
        }

        if(score <= 0) return 0;
        return score;
    }
};