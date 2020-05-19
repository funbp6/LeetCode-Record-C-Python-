/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if (preorder.empty()) return NULL;
        
        unordered_map<int, int> inmap;
        for (int i = 0; i < inorder.size(); i++){
            inmap[inorder[i]] = i;
        }
        
        return build(inmap, preorder, 0, preorder.size()-1, 0, inorder.size()-1);
    }
    
    TreeNode* build(unordered_map<int, int> &map, vector<int> &preorder, 
                    int prel, int prer, int inl, int inr){
        if (prel > prer || inl > inr) return NULL;
        TreeNode *node = new TreeNode(preorder[prel]);
        int mid = map[preorder[prel]];
        int leftlen = mid - inl;
        int rightlen = inr - mid;
        
        node -> left = build(map, preorder, prel+1, prer-rightlen, inl, mid-1);
        node -> right = build(map, preorder, prel+leftlen+1, prer, mid+1, inr);
        
        
        return node;
    }
};