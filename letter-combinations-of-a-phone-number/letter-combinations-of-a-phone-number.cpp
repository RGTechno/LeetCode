class Solution {
public:
    vector<string> letterCombinations(string digits,bool initial=true) {
                        
        if(digits.size()==0){
            vector<string> base;
            if(!initial) base.push_back("");
            return base;
        }
        
        map<char,string> mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        
        char f = digits[0];
        string s = digits.substr(1);
        
        vector<string> sub = letterCombinations(s,false);
        vector<string> ans;
        
        for(auto i:mp[f]){
            for(auto j:sub){
                ans.push_back(i+j);
            }
        }
        
        return ans;
        
    }
};