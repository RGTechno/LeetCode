class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        
        if(trust.size()==0 and n==1) return 1;
        
        map<int,int> mp;
        map<int,int> freq;
        set<int> st;
        
        int tj=-1;
        
        for(int i=0;i<trust.size();i++){
            mp[trust[i][0]] = trust[i][1];
            freq[trust[i][1]]++;
            st.insert(trust[i][1]);
        }
        
        for(auto i:st){
            if(mp.count(i)==0){
                tj=i;
            }
        }      
        
        return freq[tj]==n-1?tj:-1;
        
        
    }
};