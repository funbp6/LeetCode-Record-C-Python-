/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if (!root) return NULL;
        return ltor(root);
    }
    Node* ltor(Node *node){
        if (!node -> left && !node -> right) return node;
        node -> left -> next = node -> right;
        
        Node *tmp = node;
        if (tmp -> next){
            tmp -> right -> next = tmp -> next -> left;
            tmp = tmp -> next;
        }
        
        ltor(node -> left);
        ltor(node -> right);
        return node;
    }
};