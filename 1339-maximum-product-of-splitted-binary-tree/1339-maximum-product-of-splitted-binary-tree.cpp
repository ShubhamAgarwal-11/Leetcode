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
    long long totalSum=0;
    long ans=0,mod = 1e9+7;
     long helper(TreeNode* root){
        if(root == nullptr)
            return 0;
        int leftSum=helper(root->left);
        int rightSum=helper(root->right);
        long sum1= root->val+leftSum+rightSum;
        
        long sum2= totalSum-sum1;
        ans=max(ans,(sum1*sum2));
        return sum1;
        
    }
    int maxProduct(TreeNode* root) {
        totalSum= helper(root);
        helper(root);
        return ans%mod;
    }
};