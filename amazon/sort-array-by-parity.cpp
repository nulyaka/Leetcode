class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        int left = 0, right = (int)A.size() - 1;
        
        while (left < right) {
            
            if (A[left] % 2 == 0 && A[right] % 2 == 0) {
                left++;
                continue;
            }
            else {
                
                if (A[left] % 2 && A[right] % 2) {
                    right--;
                    continue;
                }
                if (A[left] % 2 && A[right] % 2 == 0) {
                
                    swap(A[left], A[right]); 
                }
            } 
            
            left++;
            right--;
        }
        
        return A;
    }
};
