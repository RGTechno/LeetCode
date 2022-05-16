class Solution {
    
    int calcFS(string s){
        sort(s.begin(),s.end());
        char f = s[0];
        
        map<char,int> mp;
        for(auto &i:s){
            mp[i]++;
        }
        
        return mp[f];
    }
    
    int binarySearch(vector<int> &v,int k){
        int r = v.size();
        int l = -1;
        
        while(r-l>1){
            int m = (l+r)/2;
            
            if(v[m]<=k){
                l=m;
            }
            else r=m;
        }
        
        return v.size()-r;
    }
    
    
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        
        int n = words.size();
        
        vector<int> fs_words;
        
        int N = queries.size();
        
        vector<int> fs_queries;
        
        for(auto &i:words){
            int fs_i = calcFS(i);
            fs_words.push_back(fs_i);
        }
        
        for(auto &i:queries){
            int fs_i = calcFS(i);           // calc the f(s) of each string
            fs_queries.push_back(fs_i);
        }
        
        sort(fs_words.begin(),fs_words.end());
        
        vector<int> ans;
        
        for(auto &i:fs_queries){
            int count = binarySearch(fs_words,i);   //returns number of terms greater than i
            
            ans.push_back(count);
        }
        
        
        return ans;        
        
    }
};