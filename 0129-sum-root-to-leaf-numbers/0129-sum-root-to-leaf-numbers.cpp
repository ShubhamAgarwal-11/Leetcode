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
    void helper(TreeNode* root,long long sum,vector<int>&ans){
        if(root == nullptr)
            return;
        if(root->left == nullptr && root->right == nullptr){
            sum+= root->val;
            ans.push_back(sum);
            return;
        }
        sum+=root->val;
        sum=sum*10;
        // cout<<"Left: "<<sum<<endl;
        if(root->left!=nullptr)
            helper(root->left,sum,ans);
        // cout<<"RIGHT: "<<sum<<endl;
        if(root->right!=nullptr)
            helper(root->right,sum,ans);
        
    }
    
    int sumNumbers(TreeNode* root) {
        long long sum=0;
        vector<int>ans;
        helper(root,0,ans);
        for(auto x :ans){
            sum+=x;
        }
        return sum;
    }
};