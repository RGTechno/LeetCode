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
class BSTIterator {
    vector<int> v;
    
    void solve(TreeNode *root,vector<int> &v){
        if(root==NULL) return;
        
        solve(root->left,v);
        v.push_back(root->val);
        solve(root->right,v);
    }
    
    int n;
    
    int idx;
    
public:
    BSTIterator(TreeNode* root) {
        solve(root,v);   
        
        n = v.size();
        idx = 0;
    }
    
    int next() {
        return v[idx++];
    }
    
    bool hasNext() {
        return idx<n;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */