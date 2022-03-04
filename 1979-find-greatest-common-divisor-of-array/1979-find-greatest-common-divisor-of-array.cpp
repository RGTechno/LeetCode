class Solution {
    int gcd(int a,int b){
        if(b==0) return a;
        
        return gcd(b,a%b);
    }
public:
    int findGCD(vector<int>& nums) {
        
        sort(nums.begin(),nums.end());
        
        int n = nums.size();
        
        int l = nums[0];
        int r = nums[n-1];
        
        return gcd(l,r);
    }
};