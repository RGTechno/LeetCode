class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        set<char> st;
        int l=0,r=s.size()-1;
        int m=0;
        
        int sz = 0;
        int ans = INT_MIN;
                
        while(m<=r){
            if(st.count(s[m])==0){
                st.insert(s[m]);
                sz++;
                m++;
                ans = max(ans,sz);
            }
            else{
                sz=0;
                st={};
                l++;
                m=l;
            }
            
        }
        
        return ans==INT_MIN?0:ans;
        
    }
};