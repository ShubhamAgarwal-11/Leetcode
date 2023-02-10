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
    ListNode* swapPairs(ListNode* head) {
        
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* first = head->next;
        ListNode* second = head;
        
        while(1){
            swap(first->val,second->val);
            if(first->next != nullptr)
                second = first->next;
            else
                return head;
            if(second->next != nullptr)
                first = second->next;
            else
                return head;
        }
        return head;
        
    }
};