class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        // Learning: O(N^2) - O(N)
        
        // Use of sliding window
        
        /* 
           whenever a window is invalid (window size==k) i.e the window starting 
           from st is not valid so we increment s[st] by 1 because
           we decreased earlier, so only excluding element at st from window 
           that is why only s[st] is incremented because others are still part
           of window.
           
           Basically whenever a window is completed and is invalid we only retain back
           the state if window's starting was not there and decrease window size by 1
        */
        
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