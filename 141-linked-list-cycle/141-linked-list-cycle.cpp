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
    bool hasCycle(ListNode *head) {
        bool b=false;
        while(head !=nullptr)
        {
            if(head->val == -2999)
            {
                b = true;
                break;
            }
            head->val = -2999;
            head = head->next;
        }
        
        return b;
        
    }
};