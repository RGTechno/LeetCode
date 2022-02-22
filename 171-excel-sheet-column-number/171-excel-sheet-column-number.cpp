class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int ans = 0;
        
        int n = columnTitle.size();
        
        int j=n-1;
        
        for(int i=0;i<n-1;i++){
            ans+=(pow(26,j)*(columnTitle[i]-'A'+1));
            j--;
        }
        
        ans+=(columnTitle[n-1]-'A'+1);
        
        return ans;
        
        
    }
};