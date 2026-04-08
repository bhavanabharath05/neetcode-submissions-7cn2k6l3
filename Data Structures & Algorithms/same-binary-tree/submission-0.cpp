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
vector<int>v1;
vector<int>v2;
void dfs(TreeNode*root,vector<int>& v){
    if(!root) return v.push_back(-1001) ;
   
    v.push_back(root->val);
    dfs(root->left,v);
    dfs(root->right,v);
}
    bool isSameTree(TreeNode* p, TreeNode* q) {
     dfs(p,v1);
     dfs(q,v2);
     if(v1!=v2)return false;
      return true;
      
    
    }
};
