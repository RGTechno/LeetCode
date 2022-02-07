class Solution {
public:
    char findTheDifference(string s, string t) {
        
        map<char,int> mp1,mp2;
        
        for(auto i:s){
            mp1[i]++;
        }
        
        for(auto i:t) mp2[i]++;
        
        char ans;
        
        for(auto i:t){
            if(mp1.count(i)){
                if(mp1[i]==mp2[i]) continue;
                
                else if(abs(mp1[i]-mp2[i])==1){
                    ans = i;
                    break;
                }
            }
            
            else{
                ans = i;
                break;
            }
        }
        
        return ans;
        
    }
};