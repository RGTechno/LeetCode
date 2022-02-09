class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        map<int,int> mp;
        
        set<pair<int,int>> st;
                
        for(auto &i:nums){
            mp[i]++;
        }
        
        sort(nums.begin(),nums.end());
        
        for(auto &i:nums){
            int a = i+k;
            
            if(mp.count(a)){
                if(a==i){
                    if(mp[a]>1){
                        st.insert({i,a});
                    }
                }
                else st.insert({i,a});
            }
            
        }
        
        int count = st.size();
        
        return count;        
    }
};