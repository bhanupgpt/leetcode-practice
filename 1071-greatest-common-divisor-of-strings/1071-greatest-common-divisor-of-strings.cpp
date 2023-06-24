class Solution {
public:





    string gcdOfStrings(string str1, string str2) {
        int l1 =str1.size(), l2 = str2.size();
        string base = "";
        if(str1+str2 != str2+str1) return "";
        for(int i=min(l1, l2); i>=1; i--){
            if(l1 % i != 0 || l2 % i != 0) {
                continue;
            }
            else {
                base = str1.substr(0, i);
                return base;
            }
        }


    // if(str1+str2 != str2+str1) return "";
    // int gcdBase = gcd(str1.size(), str2.size());
    // return str1.substr(0,gcdBase);
    return "";
    }
};