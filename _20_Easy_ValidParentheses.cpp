class Solution {
public:
    int precedence (char c) {
        
        switch(c) {
            case '(': return 1;
            case '{': return 2;
            case '[': return 3;
            case ')': return 4;
            case '}': return 5;
            case ']': return 6;
                
            default: return 7;
        }
    }
    
    // O(n), extra memory needed for stack of size (min(1), max(n)) 
    
    bool isValid(string s) {
        
        stack<char> myStack;
        
        for (int c(0); c < s.size(); ++c) {
            
            if (myStack.empty()) {
                myStack.push(s.at(c));
                continue;
            }
            
            if (myStack.top() == s.at(c) || precedence(s.at(c)) < 4) {
                
                myStack.push(s.at(c));
            }
            else if (precedence(myStack.top()) == precedence(s.at(c)) - 3) {
                
                myStack.pop();
            }
            else return false;
        }
        
        if (myStack.empty()) return true;
        else return false;
    }
};
