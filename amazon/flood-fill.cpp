class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, 
                                  int sr, int sc, int newColor) {
        //--------------------------------------------------------
        
        int rSize = image.size(), cSize = image.at(0).size();
        
        vector<vector<bool>> visited(rSize, vector<bool>(cSize, false));
        vector<int> dir {0, 1, 0, -1, 0};
        typedef pair<int, int> coordinate;
        
        queue<coordinate> q;
        
        // start
        int oldColor = image[sr][sc];
        image[sr][sc] = newColor;
        q.push(coordinate(sr, sc));
        
        while (!q.empty()) {
            
            coordinate cdt = q.front();
            q.pop();
            
            for (int row = 0, col = 1; row < 4; ++row, ++col) {
                
                int r = cdt.first + dir[row];
                int c = cdt.second + dir[col];
                
                if (r >= 0 && c >= 0 && r < rSize && c < cSize && 
                    !visited[r][c] && image[r][c] == oldColor) {
                    
                    visited[r][c] = true;
                    image[r][c] = newColor;
                    q.push(coordinate(r, c));
                }
            }
        }
        
        return image;
    }
};
