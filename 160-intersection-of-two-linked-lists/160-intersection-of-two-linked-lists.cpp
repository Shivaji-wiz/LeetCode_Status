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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)return NULL;
        
        ListNode *D1 = headA;
        ListNode *D2 = headB;
        
        while(D1 != D2){
            D1 = D1 == NULL ? headB:D1->next;
            D2 = D2 == NULL ? headA:D2->next;
        }
        return D1;
    }
};