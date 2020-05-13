class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        
        int arrSize = (int)A.size();
        
        vector<int> result(arrSize);
        int l = 0;
        int r = arrSize - 1;
        int i = arrSize - 1;
                
        while (l <= r) {
            
            int l_sqr = A[l] * A[l];
            int r_sqr = A[r] * A[r];
            
            if (l_sqr >= r_sqr) {                
                result[i] = l_sqr;
                l++;
            }
            else {
                result[i] = r_sqr;
                r--;
            }
            i--;
        }
        
        return result;
    }
};
