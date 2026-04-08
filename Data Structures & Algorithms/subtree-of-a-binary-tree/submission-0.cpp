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
string s1,s2;
   void inorder(TreeNode *root,string &s){
    if(!root){
        s += ",#";   
        return;
    }
    
    s+=","+(to_string(root->val));
    inorder(root->left,s);
    inorder(root->right,s);

   }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       inorder(root,s1);
       inorder(subRoot,s2);
       return s1.contains(s2);
    }
};
