class Solution {
    vector<string> v;
    
    bool good(string &s){
        int n=s.size();
                
        stack<char> stk;
        
        for(int i=0;i<n;i++){
            
            if(s[i]==')' and stk.size()==0) return false;
            
            if(s[i]=='('){
                stk.push(s[i]);
            }
            
            else if(s[i]==')' and stk.top()=='('){
                stk.pop();
            }
        }
        
        return stk.size()==0;
    }
    
    void solve(int n, string s){
        
        if(s.size()==(2*n)){
            if(good(s)){
                v.push_back(s);
            }
            return;
        }
        
        s.push_back(')');
        solve(n,s);
        s.pop_back();
        s.push_back('(');
        solve(n,s);
        s.pop_back();
    }
    
public:
    vector<string> generateParenthesis(int n) {
                
        string s;
        solve(n,s);
        
        return v;
        
    }
};