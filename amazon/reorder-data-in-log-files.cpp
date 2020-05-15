class Comp {
public:
    bool operator() (const string& first, const string& second) {
        
        size_t pos1 = first.find(' ') + 1;
        size_t pos2 = second.find(' ') + 1;
        
        return first.substr(pos1) >= second.substr(pos2);
    }
};

class Solution {
public:
    
    vector<string> reorderLogFiles(vector<string>& logs) {
        
        priority_queue<string ,std::vector<string>, Comp> letter_logs;
        vector<string> digit_logs;
        
        for (string& str: logs) {
            
            size_t pos = str.find(' ') + 1;
            
            if ('0' <= str[pos] && str[pos] <= '9') 
                digit_logs.emplace_back(str);
            else 
                letter_logs.push(str);
            
        }
        
        vector<string> reordered;
        
        while (!letter_logs.empty()) {
            
            reordered.emplace_back(letter_logs.top());
            letter_logs.pop();
        }
        
        for (string& str: digit_logs) {
            
            reordered.push_back(str);
        }
        
        return reordered;
    }
};
