class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector<string> strings;
        
        int st=0,e=s.size()-1;
        
        int i=0;
        
        while(i<=e){
            if(s[i]==' '){
                string sub = s.substr(st,i-st);
                strings.push_back(sub);
                
                st=i+1;
            }
            else if(i==e){
                string sub = s.substr(st,i-st+1);
                strings.push_back(sub);
                
                st=i+1;
            }
            
            i++;
        }
        
        map<char,string> mp;
        
        set<string> sts;
        
        if(pattern.size()!=strings.size()) return false;
        
        
        for(int k=0;k<pattern.size();k++){
            if(mp.count(pattern[k])==0 and sts.count(strings[k])==0){
                mp[pattern[k]]=strings[k];
                sts.insert(strings[k]);
            }
            
            if(mp.count(pattern[k])==0 and sts.count(strings[k])==1){
                return false;
            }
            
            else if(mp[pattern[k]]!=strings[k]){
                return false;
            }
            
        }
        
        return true;
    }
};