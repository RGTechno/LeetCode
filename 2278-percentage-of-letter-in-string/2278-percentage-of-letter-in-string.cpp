class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int> mp;
        
        for(auto &i:s){
            mp[i]++;
        }
        
        int x = mp[letter];
        int n = s.size();
        
        double y = x*(1.0)/n;
        
        int ans = y*100;
        
        return ans;
    }
    
};