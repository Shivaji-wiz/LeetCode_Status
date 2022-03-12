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
        //step 1 - creating dummy node and inserting in between two nodes.
        Node *iter = head;
        Node *front = head;
        while(iter!=NULL){
            front = iter->next;
            Node *copy = new Node(iter->val);
            iter->next = copy;
            copy->next = front;
            iter = front;
        }
        // step 2 - pointing random nodes in deep copy
        iter = head;
        while(iter!=NULL){
            if(iter->random!=NULL){
                iter->next->random = iter->random->next;
            }
            iter = iter->next->next;
        }
        //separating copy and original linked list
        iter = head;
        Node *ph = new Node(0);
        Node *copy = ph;
        while(iter!=NULL){
            front = iter->next->next;
            copy->next = iter->next;
            iter->next = front;
            copy = copy->next;
            iter=iter->next;
        }
        return ph->next;
    }
};