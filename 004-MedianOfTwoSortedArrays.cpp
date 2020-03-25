class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        // merging two arrays, and finding median
        // O(m + n)
        vector<int> merged;
        
        int idx1(0), idx2(0);
        
        while (idx1 < nums1.size() && idx2 < nums2.size()) {
            
            if (nums1.at(idx1) < nums2.at(idx2)) {
                
                merged.push_back(nums1.at(idx1++));
            }
            else {
                
                merged.push_back(nums2.at(idx2++));
            }
        }
        while (idx1 < nums1.size()) merged.push_back(nums1.at(idx1++));
        while (idx2 < nums2.size()) merged.push_back(nums2.at(idx2++));
        
        int middle_idx;
        
        if (merged.size() % 2) {
            
            middle_idx = (int)merged.size() / 2;
            return merged.at(middle_idx);
        }
        else {
            
            middle_idx = (int)merged.size() / 2 - 1;
            return (double)(merged.at(middle_idx) + merged.at(middle_idx + 1)) / 2;
        }
    }
};
