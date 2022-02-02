class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        map<char,int> mp;
        
        for(auto i:p){
            mp[i]++;
        }
        
        int n = s.size();
        
        int k = p.size();
        
        int st=0,e=0;
        
        vector<int> ans;
        
        while(e<n){
            if(mp[s[e]]>0){
                mp[s[e]]--;                
                e++;
                
                if(e-st==k){
                    ans.push_back(st);
                }                
            }
            
            else if(st==e){
                st++;
                e++;
            }
            
            else{
                mp[s[st]]++;
                st++;
            }
        }
        
        return ans;
    }
};