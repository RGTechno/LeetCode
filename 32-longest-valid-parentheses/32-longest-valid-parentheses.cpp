class Solution {
public:
    int longestValidParentheses(string s) {
        if(s.size() <= 1) return 0;
        int ans = 0;
        vector<int> v(s.size(),0);
        for(int i=1; i < s.size(); i++){
            if(s[i] == ')' && i-v[i-1]-1 >= 0 && s[i-v[i-1]-1] == '('){
                    v[i] = v[i-1] + 2 + ((i-v[i-1]-2 >= 0)?v[i-v[i-1]-2]:0);
                    ans = max(v[i],ans);
            }
        }
        return ans;
        
    }
};