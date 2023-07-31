class Solution {
public:
    string get_key(string str) {
        vector <int> count(26, 0);
        for(int j=0; j<str.size(); j++) {
            count[str[j] - 'a']++;
        }

        string key = "";
        for(int i=0; i<26; i++) {
            for(int j=0; j<count[i]; j++){
                key += 'a' + i;
            }
        }
        return key;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i=0; i<strs.size(); i++) {
            string key = get_key(strs[i]);
            m[key].push_back(strs[i]);
        }
        vector <vector<string>> result;
        for(auto it = m.begin(); it != m.end(); it++) {
            result.push_back(it->second);
        }
        return result;
    }

};
