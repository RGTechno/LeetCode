class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        map<string,vector<string>> mp;
        
        for(auto &i:strs){            
            string temp = i;
            
            sort(temp.begin(),temp.end());
            
            if(mp.count(temp)){
                mp[temp].push_back(i);
            }
            
            else{
                mp[temp] = {i};
            }
        }
        
        vector<vector<string>> ans;
        
        for(auto &i:mp){
            vector<string> v;
            for(auto &j:i.second){
                v.push_back(j);
            }
            
            ans.push_back(v);
        }
        
        return ans;
    }
};