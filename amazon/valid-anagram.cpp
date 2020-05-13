class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if (s.size() != t.size()) return false;
        
        vector<int> hash (26, 0);
        
        for (char ch: s) {
            hash[ch - 'a']++;
        }
        for (char ch: t) {
            if (!hash[ch - 'a']--) return false;
        }
        
        return true;
    }
};
