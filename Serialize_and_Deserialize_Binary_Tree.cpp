/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "#";
        ostringstream out;
        serialize(root, out);
        return out.str();
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        istringstream in(data);
        
        return deserialize(in);
    }
    
private:
    void serialize(TreeNode *cur, ostringstream &out) {
        if (cur){
            out << cur -> val << " ";
            serialize(cur -> left, out);
            serialize(cur -> right, out);
        }else{
            out << "# ";
            return;
        }
    }
    
    TreeNode* deserialize(istringstream &in) {
        string val;
        in >> val;
        if (val == "#") return NULL;
        TreeNode *node = new TreeNode(stoi(val));
        node -> left = deserialize(in);
        node -> right = deserialize(in);
        return node;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));