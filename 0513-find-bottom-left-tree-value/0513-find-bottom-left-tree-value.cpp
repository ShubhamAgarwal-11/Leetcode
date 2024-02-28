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
    vector<vector<int>> helper(TreeNode* root){
        vector<vector<int>>result;
        queue<TreeNode*>pendingNodes;
        if(root == nullptr)
            return result;
        pendingNodes.push(root);
        while(1){
            if(pendingNodes.size() == 0)
                return result;
            vector<int>level;
            int size = pendingNodes.size();
            while(size--){
                TreeNode*temp = pendingNodes.front();
                pendingNodes.pop();
                level.push_back(temp->val);
                if(temp->left != nullptr)
                    pendingNodes.push(temp->left);
                if(temp->right != nullptr)
                    pendingNodes.push(temp->right);
            }
            result.push_back(level);
        }
    }
    int findBottomLeftValue(TreeNode* root) {
        
        vector<vector<int>>result;
        result = helper(root);
        
        return result[result.size()-1][0]; 
    }
};


