class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        
        int n=points.size();
        
        sort(points.begin(),points.end());
        
        int maxW=INT_MIN;
        
        for(int i=0;i<n-1;i++){
            maxW = max(maxW,points[i+1][0]-points[i][0]);
        }
        
        return maxW;
        
    }
};