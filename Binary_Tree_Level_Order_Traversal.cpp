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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> qt{{root}};
        while(!qt.empty()){
            vector<int> innerv;
            for (int i = qt.size(); i > 0; i--){
                TreeNode *cur = qt.front(); qt.pop();
                innerv.push_back(cur -> val);
                if (cur -> left) qt.push(cur -> left);
                if (cur -> right) qt.push(cur -> right);
            }
            ans.push_back(innerv);
            
        }
        return ans;
    }
};