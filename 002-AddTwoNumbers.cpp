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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        // O(n), n - size of l1 or l2(of bigger one)
        int sum (0);
        
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;
        ListNode* l_sum = nullptr;
        ListNode* *temp = &l_sum;
        
        do { 
            if (curr1 != nullptr) {
                
                sum += curr1->val;
                curr1 = curr1->next;
            }
            if (curr2 != nullptr) {
                
                sum += curr2->val;
                curr2 = curr2->next;
            }
            *temp = new ListNode(sum % 10);
            sum /= 10;
            
            temp = &(*temp)->next;
        }
        while (curr1 != nullptr || curr2 != nullptr || sum);
        
        return l_sum;
    }
};
