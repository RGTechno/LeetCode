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
    
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        
        int l = height(root->left);
        int r = height(root->right);
        
        return max(l,r)+1;
    }
    
    void solve(TreeNode *root, int &h,int &ans,int i=1){
        if(root==NULL){
            return;
        }
        
        if(i==h){
            ans+=root->val;
        }
        
        solve(root->left,h,ans,i+1);
        solve(root->right,h,ans,i+1);
        
    }
    
public:
    int deepestLeavesSum(TreeNode* root) {
        
        int h = height(root);
                
        int ans = 0;
        solve(root,h,ans);
        
        return ans;
        
    }
};