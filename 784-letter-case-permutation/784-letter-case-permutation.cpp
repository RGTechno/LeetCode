class Solution {
    
    void solve(string &s,vector<string> &ans,int idx=0){
        
        if(idx==s.size()){
            ans.push_back(s);
            return;
        }
        
        char f = s[idx];
        
        // cout<<f<<endl;
        
        if(isalpha(f)){
            char u = toupper(f);
            s[idx]=u;
            solve(s,ans,idx+1);
            s[idx]=f;
            
            char l = tolower(f);
            s[idx]=l;
            solve(s,ans,idx+1);
            s[idx]=f;
        }
        
        else solve(s,ans,idx+1);
    }
        
public:
    vector<string> letterCasePermutation(string s) {
        
        vector<string> ans;
        
        solve(s,ans);
        
        return ans;
        
    }
};