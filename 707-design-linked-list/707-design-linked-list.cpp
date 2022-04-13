class Node {
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = nullptr;
    } 
}; //end classNode
class MyLinkedList {
public:
    //define size and head as global
    int size; 
    Node *head;
    MyLinkedList() {
       //initialize size and head
       size = 0;
       head = nullptr;
    }
    
    int get(int index) {
        //throw out invalid index
        if(index < 0 || index >= size) return -1;
        Node *target = head;
        //loop to find target node
        for(int i = 0; i < index; i++)
            target = target->next;
        return target->val;
    }
    
    void addAtHead(int val) {
        Node *newNode = new Node(val);
        if(!head) 
            head = newNode;
        else{
            //add new node at the begining
            newNode->next = head; 
            head = newNode;
        }//end else
        size++; // increase head size
    }
    
    void addAtTail(int val) {
        Node *newNode = new Node(val);
        if(!head) 
            head = newNode;
        else{
            //add new node to the end 
            Node *tail = head;
            while(tail->next){
                tail = tail->next;
            }//end while
            tail->next = newNode;
        }//end else
        size++; // increase head size
    }
    
    void addAtIndex(int index, int val) {
        //throw out invalid index
        if(index < 0 || index > size) return;
        //if index equals 0, add new node at the begining
        else if(index == 0)
            addAtHead(val);
        //otherwise, add new node before the index
        else{
            Node* newNode = new Node(val);
            Node *prev = head;
            //loop to find the previous of index's node
            for(int i = 1; i < index; i++)
                prev = prev->next;
            Node *after = prev->next;
            prev->next = newNode;
            newNode->next = after;
        }//end else
        size++; // increase head size
    }
    
    void deleteAtIndex(int index) {
        //throw out invalid index
        if(index < 0 || index >= size) return;
        //if index equals 0,
        else if(index == 0)
            head = head->next;
        else{
            Node *prev = head;
            //loop to find the previous of index's node
            for(int i = 1; i < index; i++)
                prev = prev->next;
            Node *target = prev->next;
            prev->next = target->next;
            //(target) is the node that we will detete
            delete target;
        }//end else
        size--; // decrease head size
    }
};