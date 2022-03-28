class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        set<int> st;
        
        for(auto &i:nums) st.insert(i);
        
        return st.count(target);
        
    }
};