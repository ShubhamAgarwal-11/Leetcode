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
    ListNode* reverseList(ListNode* head){
        ListNode* prev=nullptr;
        ListNode* curr = head;
        ListNode* temp = head;
        while(curr!=nullptr){
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
    int countEle(ListNode* head){
        int count=0;
        while(head!=nullptr){
            count++;
            head = head->next;
        }
        return count;
    }
    bool isPalindrome(ListNode* head) {
        int count = countEle(head);
        int mid = count/2;
        ListNode* temp = head;
        while(mid--){
            temp = temp->next;
        }
        ListNode* second = reverseList(temp);
        
        while(second != nullptr){
            if(head->val != second->val)
                return false;
            head = head->next;
            second = second->next;
        }
        
        return true;
        // while(x!=nullptr){
        //     cout<<x->val;
        //     x = x->next;
        // }
        // return true;
    }
};