/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) {
        if (!node) return {};
        if (node -> neighbors.empty()) return new Node(node -> val);
        unordered_map<Node*, Node*> map;
        
        return DFS(node, map);
    }
    
    Node* DFS(Node* node, unordered_map<Node*, Node*>& map){
        if (map.count(node)) return map[node];
        Node* clone = new Node(node -> val);
        map[node] = clone;
        
        for (int i = 0; i < node -> neighbors.size(); i++){
            clone -> neighbors.push_back(DFS(node -> neighbors[i], map));
        }
        return clone;
    }
};