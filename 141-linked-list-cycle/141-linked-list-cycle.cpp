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
        auto *temp = head;
        bool b=false;
        while(temp !=nullptr)
        {
            if(temp->val == -2999)
            {
                b = true;
                break;
            }
            temp->val = -2999;
            temp = temp->next;
        }
        
        return b;
        
    }
};