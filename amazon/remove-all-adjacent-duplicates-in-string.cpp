class Solution {
public:
    string removeDuplicates(string S) {
        
        string res;
        
        for (char &ch: S) {
            
            if (res.size() and res.back() == ch) {
                res.pop_back();   
            }
            else {
                res.push_back(ch);
            }
        }
        
        return res;
    }
};
