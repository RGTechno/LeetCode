class Solution {
    
    bool isPalin(string &s){
        string t = s;
        reverse(t.begin(),t.end());
        
        return t==s;
    }
    
public:
    bool validPalindrome(string s) {
        
        int st = 0;
        
        int n = s.size();
        int e = n-1;
        
        
        while(st<=e){
            if(s[st]==s[e]){
                st++;
                e--;
            }
            else{                
                string l1 = s.substr(0,st);
                string r1 = s.substr(st+1,n-st-1);
                
                string s1 = l1+r1;
                
                string l2 = s.substr(0,e);
                string r2 = s.substr(e+1,n-e-1);
                
                string s2 = l2+r2;
                
                if(isPalin(s1) or isPalin(s2)){
                    return true;
                }
                
                return false;
            }
        }
        
        return true;
        
    }
};