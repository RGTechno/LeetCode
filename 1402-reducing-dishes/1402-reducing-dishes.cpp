class Solution {
    int dp[501][501];

    int solve(vector<int> &v,int time=1,int idx=0){
        if(idx==v.size()){
            return 0;
        }
        if(dp[idx][time]!=-1) return dp[idx][time];
        int ans1=(v[idx]*time)+solve(v,time+1,idx+1);
        int ans2=solve(v,time,idx+1);
        
        return dp[idx][time] = max(ans1,ans2);
    }
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    
    int maxSatisfaction(vector<int>& satisfaction) {
                
        sort(satisfaction.begin(),satisfaction.end());
                
        return solve(satisfaction);
                
    }
};