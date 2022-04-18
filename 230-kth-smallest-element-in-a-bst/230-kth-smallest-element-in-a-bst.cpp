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
    
    void solve(vector<int> &v, TreeNode *root){
        if(root==NULL) return;
        
        solve(v,root->left);
        v.push_back(root->val);
        solve(v,root->right);
    }
    
public:
    int kthSmallest(TreeNode* root, int k) {
        
        vector<int> v;
        
        solve(v,root);
        
        return v[k-1];        
    }
};