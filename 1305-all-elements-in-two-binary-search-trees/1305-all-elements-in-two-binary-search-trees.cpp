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
    
    vector<int> v1(TreeNode * root){
        
        if(root==NULL){
            return vector<int>();            
        }        
        
        int value = root->val;
        vector<int> left = v1(root->left);
        vector<int> right = v1(root->right);
        
        vector<int> ans;
        
        for(auto i:left){
            ans.push_back(i);
        }
        
        ans.push_back(value);
        
        for(auto i:right){
            ans.push_back(i);
        }
        
        return ans;
        
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        
        vector<int> tree1 = v1(root1);
        vector<int> tree2 = v1(root2);
        
        vector<int> ans;
        
        for(auto i:tree1){
            ans.push_back(i);
        }
        for(auto i:tree2){
            ans.push_back(i);
        }
        
        sort(ans.begin(),ans.end());
        
        return ans;
        
    }
};