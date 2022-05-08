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
    int count;
    
    void solve(TreeNode* root, int &n, int &sum){
        if(root==NULL){
            return;
        }
        
        sum+=root->val;
        n+=1;    
        
        solve(root->left,n,sum);
        solve(root->right,n,sum);
        
    }
    
public:
    Solution(){
        count = 0;
    }
    
    int averageOfSubtree(TreeNode* root) {
        
        
        queue<TreeNode*> q;
        q.push(root);
        
        while(!q.empty()){
            
            auto node = q.front();
            
            q.pop();
            
            int n=0;
            int sum=0;
        
            solve(node,n,sum);  
            
            // cout<<n<<endl;
            // cout<<sum<<endl;
            
            int avg = sum/n;
            if(avg==node->val) count++;
            
            if(node->left!=NULL){
                q.push(node->left);
            }
            if(node->right!=NULL){
                q.push(node->right);
            }
              
        }
        
        return count;             
    }
};