class Solution {
public:
    int maxDepth(string s) {
        
        int maxAns=0;
        
        int open=0;
        
        for(auto i:s){
            if(i=='(') open++;
            else if(i==')') open--;
            maxAns=max(maxAns,open);
        }
        return maxAns;
    }
};