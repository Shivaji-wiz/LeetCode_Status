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

class mycompare{
    public:
    bool operator()(const ListNode *a,ListNode *b){
        return (a->val>b->val);
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode *head = new ListNode(0);
        ListNode *temp = head;
        priority_queue<ListNode*,vector<ListNode*>,mycompare>pq;
        
        for(int i = 0;i<lists.size();i++){
            if(lists[i]!=NULL){
                pq.push(lists[i]);
            }
        }
        while(!pq.empty()){
            auto l = pq.top();
            pq.pop();
            temp->next = l;
            temp = temp->next;
            if(l->next){
                pq.push(l->next);
            }
        }
        return head->next;
    }
};