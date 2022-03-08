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
    ListNode* middleNode(ListNode* head) {
        ListNode *twice = head;
        ListNode *once = head;
        while(twice!=NULL && twice->next!=NULL){
            twice = twice->next->next;
            once = once->next;
        }
        return once;
        
    }
};