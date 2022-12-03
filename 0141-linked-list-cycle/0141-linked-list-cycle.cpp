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
    bool helper(ListNode* slow,ListNode* fast){
        if(fast == slow)
            return true;
        if(fast == nullptr || fast->next == nullptr)
            return false;
        return helper(slow->next,fast->next->next);
    }
    bool hasCycle(ListNode *head) {
        if(head == nullptr || head->next == nullptr)
            return false;
        ListNode*slow= head;
        ListNode*fast= head->next;
        return helper(slow,fast);
    }
};