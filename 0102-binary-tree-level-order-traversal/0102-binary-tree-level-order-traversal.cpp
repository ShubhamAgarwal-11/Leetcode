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
        queue<TreeNode*> que;
        vector<vector<int>>result;
        if(root != nullptr)
            que.push(root);
        while(que.size()){
            int size = que.size();
            vector<int>level;
            while(size--){
                TreeNode* temp = que.front();
                que.pop();
                level.push_back(temp->val);
                if(temp->left != nullptr)
                    que.push(temp->left);
                if(temp->right != nullptr)
                    que.push(temp->right);
            }
            result.push_back(level);
        }
        return result;
    }
};