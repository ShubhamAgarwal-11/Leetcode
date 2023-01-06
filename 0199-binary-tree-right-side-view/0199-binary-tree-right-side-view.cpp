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
    vector<int>helper(TreeNode* root){
        queue<TreeNode*>que;
        vector<int>ans;
        if(root == nullptr)
            return ans;
        que.push(root);
        while(!que.empty()){
            int size=que.size();
            TreeNode* temp;
            while(size--){
                temp=que.front();
                que.pop();
                if(temp->left!=nullptr)
                    que.push(temp->left);
                if(temp->right!=nullptr)
                    que.push(temp->right);
            }
            ans.push_back(temp->val);
        }
        return ans;
    }
    vector<int> rightSideView(TreeNode* root) {
        return helper(root);
    }
};