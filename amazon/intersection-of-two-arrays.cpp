class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        // unordered_set operations complexity can be O(1) to O(n)
        // better to use them on smaller array list
        
        bool nums1_bigger = nums1.size() > nums2.size();
        
        vector<int>& numsToHash = nums1_bigger ? nums2 : nums1;
        vector<int>& numsToCheck = nums1_bigger ? nums1 : nums2;
        
        
        // Inserting element into set from smaller array list
        unordered_set<int> mySet;
        
        for (int num: numsToHash) { mySet.insert(num); }
    
        
        // finding intersection
        vector<int> intersection;
        
        for (int num: numsToCheck) {
            
            if (mySet.erase(num)) {
                
                intersection.push_back(num);
            }
        }
        
        return intersection;
    }
};
