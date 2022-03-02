class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int s1=0,s2=0,e1=s.size()-1,e2=t.size()-1;
        
        while(s1<=e1 and s2<=e2){
            if(s[s1]==t[s2]){
                s1++;
                s2++;
            }
            else s2++;
        }
        
        if(s1>e1) return true;
        else return false;
        
    }
};