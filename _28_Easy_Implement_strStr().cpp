class Solution {
public:
    int strStr(string haystack, string needle) {
        
        // O(n)
        
        if (needle.empty()) return 0;
        
        int n_ch (0), idx (-1);
        
        for (int h_ch(0); h_ch < haystack.size(); ++h_ch) {
            
            if (haystack.at(h_ch) == needle.at(n_ch)) {
                
                if (n_ch == 0) idx = h_ch;
                
                n_ch++;
            }     
            else {
                
                if (idx >= 0) {
                   
                    h_ch = idx;
                    idx = -1;
                }
                
                n_ch = 0;
            }
                
            if (n_ch >= needle.size()) return idx;
        }
        
        return -1;
    }
};
