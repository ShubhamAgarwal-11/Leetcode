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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*>pendingNodes;
        if(root == nullptr)
            return true;
        pendingNodes.push(root);
        bool isEven = true;
        while(1){
            if(pendingNodes.size() == 0)
                return true;
            vector<int>level;
            int size = pendingNodes.size();
            while(size--){
                TreeNode* temp = pendingNodes.front();
                pendingNodes.pop();
                level.push_back(temp->val);
                if(temp->left != nullptr)
                    pendingNodes.push(temp->left);
                if(temp->right != nullptr)
                    pendingNodes.push(temp->right);
            }
            // cout<<isEven<<"   ";
            if(isEven){
                int prev=0;
                for(int i=0;i<level.size();i++){
                    // cout<<level[i]<<"  ";
                    if(level[i]%2 == 1 && prev < level[i])
                        prev = level[i];
                    else {
                        // cout<<"here"<<"  ";
                        return false;
                    }
                }
                isEven = false;
            }else{
                int prev=INT_MAX;
                for(int i=0;i<level.size();i++){
                    if(level[i]%2 == 0 && prev > level[i])
                        prev = level[i];
                    else return false;
                }
                isEven = true;
            }
        }
        return true;
    }
};