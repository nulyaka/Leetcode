class Solution {
public:
    int romanToInt(string s) {
        
        vector<int> roman(27);
        roman['I' - 'A'] = 1;
        roman['V' - 'A'] = 5;
        roman['X' - 'A'] = 10;
        roman['L' - 'A'] = 50;
        roman['C' - 'A'] = 100;
        roman['D' - 'A'] = 500;
        roman['M' - 'A'] = 1000;
        
        int ans = s.empty() ? 0 : roman[s.back() - 'A'];
        
        if (s.size() < 2) return ans;
        
        for (int c = (int)s.size() - 2; c >= 0; --c) {
            
            if (roman[s[c] - 'A'] < roman[s[c + 1] - 'A']) {
                ans -= roman[s[c] - 'A'];
            }
            else {
                ans += roman[s[c] - 'A'];
            }
        }
        
        return ans;
    }
};
