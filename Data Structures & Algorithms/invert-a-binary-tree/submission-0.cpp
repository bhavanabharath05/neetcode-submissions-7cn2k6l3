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
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return NULL;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            TreeNode*x=q.front();
            q.pop();
            if(x->left!=NULL)q.push(x->left);
            if(x->right!=NULL)q.push(x->right);
            TreeNode*l=x->left;
            x->left=x->right;
            x->right=l;
        }
        return root;
        
    }
};
