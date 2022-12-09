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
    int help(TreeNode*root,int min_val,int max_val){
        if(root == nullptr)
            return max_val-min_val;
        min_val=min(min_val,root->val);
        max_val=max(max_val,root->val);
        return(max(help(root->left,min_val,max_val),help(root->right,min_val,max_val)));
    }
    int maxAncestorDiff(TreeNode* root) {
        int min=100000,max=0;
        return help(root,min,max);
    }
};