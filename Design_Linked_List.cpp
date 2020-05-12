struct Node {
    int val;
    Node* next;
    Node(int v, Node* nex){
        val = v;
        next = nex;
    }
};



class MyLinkedList {
public:
    /** Initialize your data structure here. */
    MyLinkedList() {
        size = 0;
        head = nullptr;
    }
    
    /** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
    int get(int index) {
        if (size <= index || index < 0) return -1;
        
        Node* cur = head;
        for (int i = 0; i < index; i++){
            cur = cur -> next;
        }
        // cout << "get" << size <<endl;
        return cur -> val;
        
    }
    
    /** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
    void addAtHead(int val) {
        Node* tmp = new Node(val, head);
        head = tmp;
        size ++;
        // this -> printlist();
    }
    
    /** Append a node of value val to the last element of the linked list. */
    void addAtTail(int val) {
        Node* tmp = new Node(val, nullptr);
        if (size == 0) head = tmp;
        else{
            Node* tail = head;
            while (tail -> next) tail = tail -> next;
            tail -> next = tmp;
        }
        size ++;
        // this -> printlist();
    }
    
    /** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
    void addAtIndex(int index, int val) {
        if (size < index || index < 0) return;
        if (index == 0) this -> addAtHead(val);
        else if (index == size) this -> addAtTail(val);
        else{
            Node* prev = head;
            int count = 0;
            while(index-1 != count){
                prev = prev -> next;
                count ++;
            }
            Node* node = new Node(val, prev -> next);
            prev -> next = node;
            size++;
        }
        
        // this -> printlist();
    }
    
    /** Delete the index-th node in the linked list, if the index is valid. */
    void deleteAtIndex(int index) {
        if (size <= index || index < 0) return;
        if (index == 0){
            Node* tmp = head;
            head = head -> next;
        }
        else if (index == size-1){
            Node* cur = head;
            while(cur -> next -> next) cur = cur -> next;
            cur -> next = nullptr;
        }
        else{
            Node* prev = head;
            int count = 0;
            while(index-1 != count){
                prev = prev -> next;
                count ++;
            }
            // cout << prev->val;
            prev -> next = prev -> next -> next;
        }
        size --;
        // this -> printlist();
    }
    
    void printlist(){
        Node* cur = head;
        while(cur){
            cout << cur -> val << " ";
            cur = cur -> next;
        }
        cout << endl;
    }
    
private:
    Node* head;
    int size;
    
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */