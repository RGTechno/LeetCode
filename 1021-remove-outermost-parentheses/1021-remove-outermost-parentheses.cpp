class Solution {
public:
    string removeOuterParentheses(string s) {
        
        int countO = 0;
        int countC = 0;
        
        int n=s.size();
        
        string ans="";
        
        int st=0;
        
        for(int i=0;i<n;i++){
            if(s[i]=='(') countO++;
            else countC++;
            
            if(countO==countC){
                string sub = s.substr(st+1,i-st-1);
                ans+=sub;
                st=i+1;
                countO=0;
                countC=0;
            }
        }
        
        return ans;
        
    }
};