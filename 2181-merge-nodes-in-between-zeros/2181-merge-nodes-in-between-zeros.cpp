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
    ListNode* mergeNodes(ListNode* head) {
        ListNode *sumList = new ListNode();
        ListNode* temp = sumList;
        int sum =0;
        while(head != nullptr){
            if(head->val != 0){
                sum+=head->val;
            }else{
                if(sum){
                    temp->next = new ListNode(sum);
                    temp=temp->next;
                    sum=0;
                }
            }
            head = head->next;
        }
        return sumList->next;
    }
};