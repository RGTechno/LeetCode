class Solution {
public:
    string truncateSentence(string s, int k) {
        
        string ans;
        
        int start=0,n=s.size();
        
        while(start<n and k>0){
            if(s[start]==' '){
                k-=1;
            }
            if(k>=1) ans.push_back(s[start]);
            start++;
        }
        
        return ans;
        
    }
};