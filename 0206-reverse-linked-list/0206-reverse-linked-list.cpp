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
    ListNode* recursive(ListNode* head){
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* newHead=recursive(head->next);
        head->next->next= head;
        head->next= nullptr;
        return newHead;
    }
    ListNode* reverseList(ListNode* head) {
        return recursive(head);
    }
};