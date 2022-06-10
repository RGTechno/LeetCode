class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        vector<vector<int>> ans;
        
        int n = intervals.size();
        for(int i=0;i<n;){
            int l=intervals[i][0];
            int r=intervals[i][1];
            int j=i;
            while(j<n and intervals[j][0]<=r){
                r=max(r,intervals[j][1]);
                j++;
            } 
            ans.push_back({l,r});
            i=j;
        }
        
        return ans;
        
    }
};