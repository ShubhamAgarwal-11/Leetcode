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
    
    int countEle(ListNode* head){
        int count=0;
        while(head!=nullptr){
            head= head->next;
            count++;
        }
        return count;
    }
    
    ListNode* middleNode(ListNode* head) {
        int count= countEle(head);
        int length = (count/2)+1;
        
        ListNode* temp = head;
        while(--length){
            temp = temp->next;
        }
        
        return temp;
        
        
        
    }
};