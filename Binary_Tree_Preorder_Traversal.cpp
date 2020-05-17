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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;
        
        stack<TreeNode*> s;
        s.push(root);
        while(s.size() > 0){
            TreeNode *cur = s.top();
            s.pop();
            ans.push_back(cur -> val);
            
            if (cur -> right) s.push(cur -> right);
            if (cur -> left) s.push(cur -> left);
        }
        
        
        
        return ans;
    }

};