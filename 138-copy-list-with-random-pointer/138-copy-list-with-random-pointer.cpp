/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> m;
        Node *temp = head;
        
        //mapping original nodes to their deep copies
        while(temp!=NULL){
            Node *dum = new Node(temp->val);
            m[temp] = dum;
            temp=temp->next;
        }
        
        //mapping the connections next and random
        temp = head;
        while(temp!=NULL){
            Node *dum = m[temp];
            dum -> next = m[temp->next];
            dum -> random = m[temp -> random];
            temp = temp->next;
        }
        return m[head];
    }
};