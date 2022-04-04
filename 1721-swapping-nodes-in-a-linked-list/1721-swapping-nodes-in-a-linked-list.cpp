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
        ListNode *start = head;
        ListNode *end = head;
        ListNode *curr = head;
        int cnt = 1;
        while(curr!=NULL){
            if(cnt<k){
                start = start->next;
            }
            if(cnt>k){
                end = end->next;
            }
            curr = curr->next;
            cnt+=1;
        }
        int temp;
        temp = start->val;
        start->val = end->val;
        end->val = temp;
        return head;
    }
};