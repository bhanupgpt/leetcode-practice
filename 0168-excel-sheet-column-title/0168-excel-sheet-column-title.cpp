class Solution {
public:
    string convertToTitle(int columnNumber) {
        

        string ans = "";
        while(columnNumber) {
            if(columnNumber % 26 == 0) {
                ans = 'Z' + ans;
                    columnNumber = columnNumber / 26 - 1;
                    
                    
            }
            else {
                ans =  char(columnNumber % 26 - 1 + int('A')) + ans;
                columnNumber = columnNumber / 26;
            }
            
        }
        return ans;
    }
};