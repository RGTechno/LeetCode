class Solution {
    vector<int> v;
    int count;
public:
    Solution(){
        v = {'a','e','i','o','u'};
        count = 0;
    }
    
    void solve(int n,string &s,char prev){
        
        if(s.size()==n){
            count++;
            return;
        }
        
        for(int i=0;i<5;i++){
            if(v[i]>=prev){
                s.push_back(v[i]);
                solve(n,s,v[i]);
                s.pop_back();
            }
        }
    }
    
    int countVowelStrings(int n) {
        
        string s;
        
        solve(n,s,'a');
        
        return count;        
    }
};