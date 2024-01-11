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
    int getDecimalValue(ListNode* head) {
        if(head == nullptr)
            return 0;
        int length = 0;
        ListNode *temp = head;
        while(temp != nullptr){
            length++;
            temp = temp->next;
        }
        temp = head;
        int result =0;
        while(temp != nullptr){
            result += pow(2,length-1)*temp->val;
            length--;
            temp = temp->next;
        }
        return result;
    }
};