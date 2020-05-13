class Comp {
public:
    bool operator() (const string& first, const string& second) {
        
        int c1 = 0, c2 = 0;
        
        for (unsigned int c = 0; c < first.size(); ++c) {
            if (first[c] == ' ') {
                c1 = c + 1;
                break;
            }
        }
        for (unsigned int c = 0; c < first.size(); ++c) {
            if (second[c] == ' ') {
                c2 = c + 1;
                break;
            }
        }
        return first.substr(c1) >= second.substr(c2);
    }
};

class Solution {
public:
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        
        priority_queue<string ,std::vector<string>, Comp> letter_logs;
        vector<string> digit_logs;
        
        for (string& str: logs) {
            
            char ch;
            for (unsigned int c = 0; c < str.size(); ++c) {
                
                if (str[c] == ' ') {
                    ch = str[c + 1];
                    break;
                }
            }
            
            if ('0' <= ch && ch <= '9') 
                digit_logs.push_back(str);
            else 
                letter_logs.push(str);
            
        }
        
        vector<string> reordered;
        
        while (!letter_logs.empty()) {
            
            reordered.push_back(letter_logs.top());
            letter_logs.pop();
        }
        
        for (string& str: digit_logs) {
            
            reordered.push_back(str);
        }
        
        return reordered;
    }
};
