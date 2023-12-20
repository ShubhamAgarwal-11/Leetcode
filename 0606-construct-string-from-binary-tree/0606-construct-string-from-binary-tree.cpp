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
    string result="";
    string tree2str(TreeNode* root) {
        if(root != nullptr)
            result.append(to_string(root->val));
        
        if(root->left == nullptr && root->right == nullptr)
            return result;
        
        if(root->left != nullptr){
            result.append("(");
            tree2str(root->left);
            result.append(")");
        }
        else if(root->left == nullptr){
            result.append("(");
            result.append(")");
        }
        
        if(root->right != nullptr){
            result.append("(");
            tree2str(root->right);
            result.append(")");
        }
        // else if(root->right == nullptr){
        //     result.append("(");
        //     result.append(")");
        // }
        return result;
    }
};