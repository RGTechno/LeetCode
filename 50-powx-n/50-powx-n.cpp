class Solution {
public:
    double myPow(double x, int n) {
        
        if(n==0) return 1;
        double a=myPow(x,n/2);
        double ans = a*a;
        if(n&1){
            return n>0?(ans)*x:(1/x)*ans;
        }
        return ans;        
        
    }
};