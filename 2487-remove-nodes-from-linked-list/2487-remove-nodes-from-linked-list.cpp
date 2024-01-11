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
    ListNode* removeNodes(ListNode* head) {
        if(head == nullptr || head->next == nullptr)
            return head;
        stack<int>stk;
        while(head != nullptr){
            stk.push(head->val);
            head = head->next;    
        }
        int element = stk.top();
        stk.pop();
        ListNode* result = new ListNode(element);
        while(!stk.empty()){
            element = stk.top();
            if(element >= result->val){
                ListNode* temp = new ListNode(element);
                temp->next = result;
                result = temp;
            }
            stk.pop();
        }
        return result;
    }
};