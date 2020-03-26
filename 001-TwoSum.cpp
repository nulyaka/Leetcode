class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    
        // O(n * logn), extra memory (n size map)
        
        vector<int> twoSum;
        map<int, int> myMap;
        
        for (int idx(0); idx < nums.size(); ++idx) {
            
            myMap.insert(pair<int, int>(nums.at(idx), idx));
            
            int complement = target - nums.at(idx);
            
            auto it = myMap.find(complement);
            if ( it != myMap.end() && it->second != idx) {
                
                twoSum.push_back (idx);
                twoSum.push_back (it->second);
                break;
            }
        }
         
        return twoSum;
    }
};
