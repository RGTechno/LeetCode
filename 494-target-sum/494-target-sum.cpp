int dp[21][1001];

class Solution {
public:
    Solution(){
        memset(dp,-1,sizeof(dp));
    }
    
    int countSubsetWithSum(vector<int> nums,int sum,int n){
        
        if(sum<0) return 0;
        if(n==0) return sum==0;
        
        
        if(dp[n][sum]!=-1) return dp[n][sum];
        
        if(nums[n-1]<=sum){
            return dp[n][sum] = countSubsetWithSum(nums,sum,n-1)+countSubsetWithSum(nums,sum-nums[n-1],n-1); 
        }
        else return dp[n][sum] = countSubsetWithSum(nums,sum,n-1);
        
    }
    
    int findTargetSumWays(vector<int>& nums, int target) {
        //s1-s2 = target
        //s1+s2 = sum of array (totalSum)
        
        // s1 = target+totalSum/2
        // count all subsets with given sum
        
        int n = nums.size();
        
        if(n==1 and abs(target)!=nums[0] and target==0) return 0;
        
        int totalSum = 0;
        for(auto i:nums){
            totalSum+=i;
        }
        
        int s1 = (target+totalSum)/2;
        
        if((totalSum+target)&1) return 0;
        
        return countSubsetWithSum(nums,s1,n);
    }
};