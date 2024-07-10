class Solution {
public:
    int minOperations(vector<string>& logs) {
        int score = 0;
        for(int i=0; i<logs.size(); i++) {
            if(logs[i] == "../") {
                if(score != 0) score--;
                
            }
            else if(logs[i] == "./") {
                ;
            }
            else {
                score ++;
            }
        }

        if(score <= 0) return 0;
        return score;
    }
};