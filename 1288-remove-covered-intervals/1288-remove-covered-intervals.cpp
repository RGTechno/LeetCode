class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        
        int n = intervals.size();
        int count = 0;
        
        int cmax = intervals[0][1];
        int cmin = intervals[0][0];
        
        for(int i=1;i<n;i++){
            if(intervals[i][0]>cmin and intervals[i][1]>cmax){
                count++;
            }
            
            if(intervals[i][1]>cmax) {
                cmin = intervals[i][0];
                cmax = intervals[i][1];
            }
        }
        
        return count+1;
    }
};