class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        stack<int> myStack;
        
        // el, nextGreater of el
        unordered_map<int, int> myMap;
        
        for (int n: nums2) {
            
            while(!myStack.empty() && myStack.top() < n) {
                        
                myMap[myStack.top()] = n;
                myStack.pop();
            }
            myStack.push(n);
        }
        
        vector<int> nge;
        
        for (int n: nums1) {
            
            nge.push_back(myMap.count(n) ? myMap[n] : -1);
        }
        
        return nge;
    }
};
