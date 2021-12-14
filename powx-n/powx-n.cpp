class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0) return 1;

        double temp = myPow(x,n/2);

        double ans = temp*temp;

        if(n&1){
            if(n>0){
                ans = x*ans;
            }
            else{
                ans = (1/x)*ans;
            }
        }
        
        return ans;
    }
};