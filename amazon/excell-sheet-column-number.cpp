class Solution {
public:
    int titleToNumber(string s) {
        
        int ans = 0;
        
        for (int c = 0; c < s.size(); ++c) {
            
            ans *= 26;
            ans += s[c] - 'A' + 1;
        }
        
        return ans;
    }
};
