class Solution {
    map<char,vector<char>> mp;
public:
    Solution(){
        mp['2']={'a','b','c'};
        mp['3']={'d','e','f'};
        mp['4']={'g','h','i'};
        mp['5']={'j','k','l'};
        mp['6']={'m','n','o'};
        mp['7']={'p','q','r','s'};
        mp['8']={'t','u','v'};
        mp['9']={'w','x','y','z'};
    }
    
    void solve(string &digits, vector<string> &ans,string &s,int idx=0){
        
        if(idx==digits.size()){
            if(s!="")
                ans.push_back(s);
            return;
        }
        
        vector<char> v = mp[digits[idx]];
        for(auto &i:v){
            s.push_back(i);
            solve(digits,ans,s,idx+1);
            s.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {       
        
        vector<string> ans;
        
        string s;
        solve(digits,ans,s);
        
        return ans;
    }
};