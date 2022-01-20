class Solution {
public:
    
    bool good(vector<int> &piles,int h,int m){
        
        int count = 0;
        
        for(int i=0;i<piles.size();i++){
            if(piles[i]<=m){
                count+=1;
            }
            else{
                if(piles[i]%m==0){
                    count+=(piles[i]/m);
                }
                else{
                    count+=((piles[i]/m)+1);
                }
            }
        }
        
        return count<=h;
    }
    
    int minEatingSpeed(vector<int>& piles, int h) {
        
        int l=0,r=*max_element(piles.begin(),piles.end()); //1e9 == 1000000000
        
        while(r-l>1){
            int m = (l+r)/2;
            
            if(good(piles,h,m)){
                r=m;
            }else{
                l=m;
            }
        }
        
        return r;
    }
};