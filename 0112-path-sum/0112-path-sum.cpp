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
    int sum=0,count=0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root == nullptr)
            return false;
        sum+=root->val;
        if(root->left == nullptr && root->right == nullptr){
            if(sum == targetSum){
                count++;
                // cout<<"root: "<<root->val<<endl;;
            }
            // else{
            //     cout<<"root: "<<root->val<<endl;
            //     cout<<"SUM: "<<sum<<endl;;
            // }
        }else{
            if(root->left != nullptr)
                hasPathSum(root->left,targetSum);
            if(root->right != nullptr)
                hasPathSum(root->right,targetSum);
        }
        sum-=root->val;
        if(count>0)
            return true;
        return false;
    }
};