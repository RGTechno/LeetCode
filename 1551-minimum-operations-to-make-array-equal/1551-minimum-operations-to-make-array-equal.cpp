class Solution {
public:
    int minOperations(int n) {
        
        int ans=0;
                
        int i=0;
        
        while(i<n/2){
            ans+=(n-(2*i+1));
            i++;
        }       
        
        return ans;
        
        
    }
};