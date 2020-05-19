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
    unordered_map<int, int> inorder_map;
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        if (inorder.empty()) return NULL;
        
        
        for (int i = 0; i < inorder.size(); i++){
            inorder_map[inorder[i]] = i;
        }
        
        return buildtree(postorder, 0, inorder.size()-1, 0, postorder.size()-1);
    }
    
    TreeNode* buildtree( vector<int>& postorder,
                   int il, int ir, int pl, int pr){
        if (il > ir || pl > pr) return NULL;
        
        TreeNode *node = new TreeNode(postorder[pr]);
        int mid = inorder_map[postorder[pr]];
        int leftlen = mid - il;
        int rightlen = ir - mid;
        node -> left = buildtree(postorder, il, mid-1, pl, pr-rightlen-1);
        node -> right = buildtree(postorder, mid+1, ir, pl+leftlen, pr-1);
        
        return node;
    }
};