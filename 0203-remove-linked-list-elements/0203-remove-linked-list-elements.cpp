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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == nullptr || head->val == val && head->next == nullptr)
            return nullptr;
        
        ListNode* first = head;
        ListNode* second = nullptr;
        
        ListNode* headX = new ListNode(0);
        ListNode* last = headX;
        
        while(first != nullptr){
            if(first->val != val){
                last->next = first;
                last = last->next;
                second = first;
                first = first->next;
            }else{
                last->next = nullptr;
                second = first;
                first = first->next;
                
            }
        }
        return headX->next;
    }
};