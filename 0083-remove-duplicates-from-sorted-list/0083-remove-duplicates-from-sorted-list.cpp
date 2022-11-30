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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode*curr=head;
        ListNode*forw=head->next;
        while(forw!=nullptr){
            if(curr->val == forw->val){
                curr->next= forw->next;
                forw=forw->next;
            }
            else{
                curr=curr->next;
                forw=forw->next;   
            }
        }
        return head;
    }
};