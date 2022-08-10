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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        
        if(n==0){
            return NULL;
        }
        
        int m = n/2;
        
        int rootVal = nums[m];
        
        auto root = new TreeNode(rootVal);
        
        vector<int> left;
        for(int i=0;i<m;i++){
            left.push_back(nums[i]);
        }
        root->left = sortedArrayToBST(left);
        
        vector<int> right;
        for(int i=m+1;i<n;i++){
            right.push_back(nums[i]);
        }
        
        root->right = sortedArrayToBST(right);
        
        return root;
    }
};