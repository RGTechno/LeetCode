class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        
        map<char,int> mp1,mp2;
        
        for(auto &i:target){
            mp2[i]++;
        }
        
        for(auto &i:s){
            mp1[i]++;
        }
        
        int ans = INT_MAX;
        for(auto &i:target){
            int can_make = mp1[i]/mp2[i];
            ans = min(ans,can_make);
        }
        
        return ans;
        
    }
};