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
    ListNode *reverse(ListNode *head){
        ListNode *dummy = NULL;
        
        while(head!=NULL){
            ListNode *nxt = head->next;
            head -> next = dummy;
            dummy = head;
            head = nxt;
        }
        return dummy;
    }
    
    void reorderList(ListNode* head) {
        ListNode *fast = head;
        ListNode *slow = head;
        
        while(fast and fast->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode *second = reverse(slow->next);
        slow->next = NULL;
        ListNode *first = head;
        
        while(second){
            ListNode *temp1 = first->next;
            ListNode *temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};