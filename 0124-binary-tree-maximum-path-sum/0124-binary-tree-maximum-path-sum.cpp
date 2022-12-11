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
    int ans= INT_MIN;
    int helper(TreeNode* root){
        if(root == nullptr)
            return 0;
        int left= helper(root->left);
        int right= helper(root->right);
        left= left>0?left:0;
        right= right>0?right:0;
        ans=max(ans,left+right+root->val);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return ans;
    }
};