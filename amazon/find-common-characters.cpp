class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        
        vector<int> hash(26);
        
        for (char ch: A[0]) {
            hash[ch - 'a']++;
        }
        
        for (auto &str: A) {
            
            vector<int> temp(26);
            
            for (auto &ch: str) {
                
                if (hash.at(ch - 'a')) {
                    
                    temp[ch - 'a']++;
                    hash[ch - 'a']--;
                }
            }
            
            hash = temp;
        }
        
        vector<string> res;
        
        for (int ch = 0; ch < hash.size(); ++ch) {
            
            while (hash[ch]) {
                
                res.push_back(string(1, ch + 'a'));
                hash[ch]--;
            } 
        }
        
        return res;
    }
};
