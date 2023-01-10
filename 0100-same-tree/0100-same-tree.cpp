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
    // void inorder(TreeNode* p,vector<int> &inp)
    // {
    //     if(p!=nullptr)
    //     {
    //         inorder(p->left,inp);
    //         inp.push_back(p->val);
    //         inorder(p->right,inp);
    //     }
    //     else
    //         inp.push_back(100000);
    // }
    // void preorder(TreeNode * root,vector<int>&arr)
    // {
    //     if(root!=nullptr)
    //     {
    //         arr.push_back(root->val);
    //         preorder(root->left,arr);
    //         preorder(root->right,arr);
    //     }
    //     else
    //         arr.push_back(100000);
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
//         vector<int> inp,inq,prep,preq;
//         inorder(p,inp);
//         inorder(q,inq);
        
//         preorder(p,prep);
//         preorder(q,preq);
        
//         if(inp==inq && prep==preq)
//             return true;
//         else
//             return false;
        if(p == nullptr && q == nullptr)
            return true;
        else if(p == nullptr || q == nullptr)
            return false;
         return(p->val == q->val && isSameTree(p->left,q->left) && isSameTree(p->right,q->right));
        
    }
};