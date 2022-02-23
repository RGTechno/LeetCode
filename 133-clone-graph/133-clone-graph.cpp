/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    Node* solve(Node* node, map<Node*,Node*> &mp){
        if(node==NULL) return NULL;
        
        if(!mp.count(node)){
             mp[node] = new Node(node->val,vector<Node*>());
            for(auto &i:node->neighbors){
                mp[node]->neighbors.push_back(solve(i,mp));
            }
        }
        
        return mp[node];
    }
public:
    Node* cloneGraph(Node* node) {
        
        map<Node*,Node*> mp;
        // for(auto &i:node->neighbors) cout<<i->val<<endl;

        
        auto ans = solve(node,mp);
        
        return ans;
    }
};