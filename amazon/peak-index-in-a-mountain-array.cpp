class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        
        int end = (int)A.size();
        int mid = end / 2;
        
        while (mid) {
            
            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            }
            else if (A[mid - 1] > A[mid]) {
                end = mid;
                mid /= 2;
            }
            else if (A[mid] < A[mid + 1]) {
                mid = (mid + end) / 2;
            }
        } 
        
        return mid;
    }
};
