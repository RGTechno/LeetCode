class Solution {
    void place_all_set(vector<int> &freq,int n){
        
        int count = 0;
        while(n>0){
            if(n&1){
                freq[count]++;
            }
            count++;
            n>>=1;
        }
        
    }
public:
    int largestCombination(vector<int>& candidates) {
        
        vector<int> freq(30,0);
        
        for(auto &i:candidates){
            place_all_set(freq,i);
        }
        
        int ans=INT_MIN;
        
        for(int i=0;i<30;i++){
            ans=max(ans,freq[i]);
        }
        
        return ans;
        
    }
};