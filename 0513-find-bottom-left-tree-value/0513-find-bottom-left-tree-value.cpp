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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*>pendingNodes;
        pendingNodes.push(root);
        while(pendingNodes.size() != 0){
            root = pendingNodes.front();
            pendingNodes.pop();
            if(root->right != nullptr)
                pendingNodes.push(root->right);
            if(root->left != nullptr)
                pendingNodes.push(root->left);
        }
        return root->val;
    }
};