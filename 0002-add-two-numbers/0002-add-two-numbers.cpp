/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Static carry can cause issues in multiple test cases, better to make it a local variable
        static int carry = 0;
        
        // Base case: if both lists are empty and no carry
        if (l1 == nullptr && l2 == nullptr && carry == 0) {
            return nullptr;
        }
        
        // Extract values, defaulting to 0 if list is null
        int l1_data = l1 ? l1->val : 0;
        int l2_data = l2 ? l2->val : 0;
        
        // Calculate sum and new carry
        int l3_data = l1_data + l2_data + carry;
        carry = l3_data / 10;
        l3_data %= 10;
        
        // Prepare next recursive call with safe null checking
        ListNode* next_l1 = l1 ? l1->next : nullptr;
        ListNode* next_l2 = l2 ? l2->next : nullptr;
        
        // Create new node with recursive call
        ListNode* l3 = new ListNode(l3_data);
        
        // If there are more nodes or carry exists, continue recursion
        if (next_l1 || next_l2 || carry) {
            l3->next = addTwoNumbers(next_l1, next_l2);
        }
        
        return l3;
    }
};