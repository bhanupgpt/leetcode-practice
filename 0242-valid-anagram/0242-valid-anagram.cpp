class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int arr_s[26] = {0};
        // int arr_t[26] = {0};
        
        for(int i=0; i<s.size(); i++) {
            arr_s[s[i] - 'a']++;
            // arr_t[t[i] - 'a']++;
            arr_s[t[i] - 'a']--;
        }
        for(int i=0; i<26; i++) {
            // if(arr_s[i] != arr_t[i]) return false;
            if(arr_s[i] != 0) return false;
        }
        return true;

    }
};