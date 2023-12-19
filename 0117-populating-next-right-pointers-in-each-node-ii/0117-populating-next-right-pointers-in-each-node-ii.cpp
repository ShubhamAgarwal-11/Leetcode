/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>pendingNodes;
        if(root == nullptr)
            return root;
        pendingNodes.push(root);
        while(1){
            if(pendingNodes.size() == 0)
                return root;
            int size = pendingNodes.size();
            while(size--){
                Node* temp = pendingNodes.front();
                pendingNodes.pop();
                if(size != 0)
                    temp->next = pendingNodes.front();
                else
                    temp->next = nullptr;
                
                if(temp->left != nullptr)
                    pendingNodes.push(temp->left);
                if(temp->right != nullptr)
                    pendingNodes.push(temp->right);
                
            }
        }
        return root;
    }
};



