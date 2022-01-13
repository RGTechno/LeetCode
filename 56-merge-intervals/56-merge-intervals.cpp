class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int n = intervals.size();
        
        vector<vector<int>> ans;
        
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<n;){
            int l = intervals[i][0];
            int r = intervals[i][1];
            i++;
            while(i<n and r>=intervals[i][0]){
                r = max(r,intervals[i][1]);
                i++;
            }       
            
            ans.push_back({l,r});
            
        }    
        
        return ans;
        
    }
};