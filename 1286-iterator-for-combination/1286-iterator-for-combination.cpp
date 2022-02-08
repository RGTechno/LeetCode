class CombinationIterator {
    
    vector<string> solve(string s,int l){
        
        int n = s.size();
        
        if(n==0){
            vector<string> base;
            base.push_back("");
            
            return base;
        }
        
        char f = s[0];
        string sub = s.substr(1);
        
        vector<string> rest = solve(sub,l);
        
        vector<string> ans;
        
        for(auto i:rest){
            string t = f+i;
            ans.push_back(t);
        }
        
        for(auto i:rest){
            ans.push_back(i+"");
        }
        
        return ans;
    }
    
    vector<string> v;
    
    int total;
    
    int idx;
    
public:
    CombinationIterator(string characters, int combinationLength) {
        vector<string> hello = solve(characters,combinationLength);       
        
        for(auto &i:hello){
            if(i.size()!=combinationLength) continue;
            v.push_back(i);
        }
        
        total = v.size();    
        
        // cout<<total<<endl;
        idx = 0;
    }
    
    string next() {
        return v[idx++];        
    }
    
    bool hasNext() {
        return idx<(total);        
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLength);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */