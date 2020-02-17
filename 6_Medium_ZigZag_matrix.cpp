class Solution {
public:
    string convert(string s, int numRows) {
        
        // O(n), extra memory(matrix of n elements, where n is the size of string)
        
        string zigzag;
        
        if ((int)s.size() < numRows || numRows == 1) return s;
        else if (numRows == 2) {
            
            int i(0), j(1);
            while (i < s.size()) { zigzag += s.at(i); i += numRows; }
            while (j < s.size()) { zigzag += s.at(j); j += numRows; }
            
            return zigzag;
        }
        
        int main_columns = (int)s.size() / numRows + 1;
        int numColumns = (numRows - 2 + 1) * main_columns;
        
        vector<vector<char>> myMatrix (numRows, vector<char>(numColumns, ' '));
        
        int n = main_columns;
        
        int idx(0), row(0), col(0);
        while (n--) {
            
            while (row < numRows && idx < s.size()) {
                
                myMatrix.at(row++).at(col) = s.at(idx++);
            }
            row -= 2;
            col++;
            
            while (row != 0 && idx < s.size()) {
                
                myMatrix.at(row).at(col) = s.at(idx++);
                row--; col++;
            }
        }
        
        for (int row(0); row < numRows; ++row) {
            
            for (int col(0); col < numColumns; ++col) {
                
                if (myMatrix.at(row).at(col) != ' ') {
                    
                    zigzag += myMatrix.at(row).at(col);
                }
            }
        }
        
        return zigzag;
    }
};
