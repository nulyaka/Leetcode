class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        
        if (grid.empty()) return 0;
        
        vector<int> checker {0, 1, 0, -1, 0};
        
        int perimeter = 0;
        
        for (int r = 0; r < (int)grid.size(); ++r) {
            
            for (int c = 0; c < (int)grid.at(0).size(); ++c) {
                
                if (grid[r][c] == 1) {
                    
                    perimeter += 4;
                    
                    for (int i = 0, j = 1; i < 4; ++i, ++j) {
                        
                        int row = r + checker[i];
                        int col = c + checker[j];
                        
                        if (row >= 0 && row < grid.size() && 
                            col >= 0 && col < grid.at(0).size() && 
                            grid[row][col] == 1) {
                            
                            perimeter -= 1;
                        }
                    }
                }
            }
        }
        
        return perimeter;
    }
};
