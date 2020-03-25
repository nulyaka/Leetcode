/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 // Divide and Conquer with merging sorted lists
 // O(n * log(k)), where n is number of nodes and k is number of lists
 
class Solution {
public:  
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        if (l1 == nullptr) return l2;
        else if (l2 == nullptr) return l1;
        
        ListNode* mergedHead = nullptr; 
        ListNode* mergedTail = nullptr;
        
        while (l1 != nullptr && l2 != nullptr) {
            
            ListNode* temp;
            
            if (l1->val <= l2->val) {
                
                temp = l1;
                l1 = l1->next;
            }
            else {
                
                temp = l2;
                l2 = l2->next;
            }
            
            if (mergedHead == nullptr) {
                
                mergedHead = temp;
                mergedTail = mergedHead;
            }
            else {
                
                mergedTail->next = temp;
                mergedTail = mergedTail->next;
            }
        }
        
        if (l1 != nullptr) mergedTail->next = l1;
        else mergedTail->next = l2;
        
        return mergedHead;
    }
    
    ListNode* divideAndMerge (vector<ListNode*>& lists, int low, int high) {
        
        if (low == high) { return lists.at(low); }
        else if (low + 1 == high) {
            
            return mergeTwoLists (lists.at(low), lists.at(high));
        }
        else {
            
            int mid = (low + high) / 2;
            
            ListNode* merged1 = nullptr;
            ListNode* merged2 = nullptr;
            
            merged1 = divideAndMerge (lists, low, mid);
            merged2 = divideAndMerge (lists, mid + 1, high);
            
            return mergeTwoLists (merged1, merged2);
        }
    }
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* merged = nullptr;
        
        int size = static_cast<int>(lists.size());
        
        if (size == 1) return lists.at(0);
        else if (size > 1) merged = divideAndMerge (lists, 0, size - 1);
        
        return merged;
    }
};
