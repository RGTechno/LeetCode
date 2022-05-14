class Solution {
    
    bool good(vector<int>& w, int days, int m){
        int count = 0;
        int sum = 0;
        
        int n = w.size();
        
        for(int i=0;i<n;i++){
            sum+=w[i];
            
            if(sum<m){
                continue;
            }
            else if(sum==m){
                count++;
                sum=0;
            }
            else{
                count++;
                i--;
                sum=0;
            }
            
            if(count>days) return false;
        }
        if(sum!=0) count++;
        return count<=days;        
    }
    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        
        int maxCap = 0;
        for(auto &i:weights){
            maxCap+=i;
        }
        
        int l=0,r=maxCap+1;
        
        while(r-l>1){
            int m = (l+r)/2;
            
            if(good(weights,days,m)){
                r=m;
            }
            else{
                l=m;
            }
        }
        
        return r;
        
    }
};