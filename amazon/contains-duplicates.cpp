class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set<int> mySet;
        
        for (int num: nums) {
            
            if (mySet.count(num)) return true;
            
            mySet.insert(num);
        }
        
        return false;
    }
};
