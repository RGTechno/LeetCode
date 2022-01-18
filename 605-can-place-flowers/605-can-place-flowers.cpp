class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        
        // 0 can be changed with 1
        
        // on N consective zeroes max N/2 or N/2-1 or N/2+1 1's can be placed
        
        int max=0;
        
        for(int i=0;i<flowerbed.size();i++){
            int m=i;
            int czero=0;
            if(flowerbed[i]==0){
                while(m<flowerbed.size() and flowerbed[m]==0){
                    czero++;
                    m++;
                }
                
                if(i==0 and m==flowerbed.size()){
                    max+=((czero+1)/2);
                }
                
                else if(i==0 or m==flowerbed.size()){
                    max+=(czero/2);
                }              
                
                else if(czero>2){
                    if(czero&1){
                        max+=(czero/2);
                    }
                    else {
                        max+=((czero-1)/2);
                    }
                }
                i=m;
            }
        }
        
        if(n==1 and flowerbed.size()==1 and flowerbed[0]!=1) return true;        
        if(max>=n) return true;
        return false;
        
    }
};