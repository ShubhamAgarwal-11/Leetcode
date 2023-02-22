/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    
    int countEle(ListNode *head){
        int count=0;
        while(head){
            count++;
            head=head->next;
        }
        return count;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int firstLength,secondLength;
        firstLength= countEle(headA);
        secondLength= countEle(headB);
        int diff = abs(firstLength-secondLength);
        
        if(firstLength>secondLength){
            while(diff--){
                headA=headA->next;
            }
        }else{
            while(diff--){
                headB = headB->next;
            }
        }
        
        while(headA != nullptr && headB != nullptr){
            if(headA == headB)
                return headA;
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    }
};