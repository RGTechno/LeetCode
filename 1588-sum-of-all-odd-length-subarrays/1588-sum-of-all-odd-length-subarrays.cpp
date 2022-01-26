class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();
        
        vector<int> prefix(n);
        
        prefix[0]=arr[0];
        
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+arr[i];
        }
        
        int ans = prefix[0];
        
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((j-i)&1){
                    ans+=(prefix[j]-prefix[i]);
                }
                else if(!((j-i)&1) and i==0) ans+=prefix[j];
            }
        }        
        return ans;
        
    }
};