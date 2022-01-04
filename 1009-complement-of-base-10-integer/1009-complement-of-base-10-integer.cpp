class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n==0) return 1;
        
        int k=n;
        
        int i=0;
        while(n){
            n/=2;
            i++;
        }
        
        int maxN = pow(2,i)-1;
        
        return maxN-k;
    }
};