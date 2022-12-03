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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode*first=head;
        ListNode*second=head;
        int count=0;
        while(second!=nullptr){
            count++;
            second=second->next;
        }
        second=head;
        for(int i=0;i<count-k;i++)
            second=second->next;
        for(int i=1;i<k;i++){
            first=first->next;
        }
        swap(first->val,second->val);
        return head;
    }
};