class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans(numRows,vector<int>());
        
        ans[0]={1};
        
        for(int i=1;i<numRows;i++){
            vector<int> v;
            v.push_back(1);
            int n = ans[i-1].size();
            for(int j=0;j<n-1;j++){
                int sum = ans[i-1][j]+ans[i-1][j+1];
                v.push_back(sum);                
            }
            v.push_back(1);
            ans[i]=v;
        }
        return ans;
    }
};