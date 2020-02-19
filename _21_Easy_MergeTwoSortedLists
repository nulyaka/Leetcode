/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
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
        
        if (mergedHead == nullptr) {
            
            if (l1 != nullptr) mergedHead = l1;
            else mergedHead = l2;
        }
        else {
            
            if (l1 != nullptr) mergedTail->next = l1;
            else mergedTail->next = l2;
        }
        
        return mergedHead;
    }
};
