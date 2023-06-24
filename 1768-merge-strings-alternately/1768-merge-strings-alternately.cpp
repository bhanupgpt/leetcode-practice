class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l1 = 0, l2 = 0;
        string ans="";
        while(l1<word1.size() && l2<word2.size()) {
            ans.push_back(word1[l1]);
            ans.push_back(word2[l2]);
            l1++; l2++;
        }
        if(word1.size() > word2.size()) {
            while(l1<word1.size()){
                ans.push_back(word1[l1]);
                l1++;
            } 
        }
        else if(word2.size() > word1.size()) {
            while(l2<word2.size()){
                ans.push_back(word2[l2]);
                l2++;
            } 
        }

        return ans;       
        
    }
};