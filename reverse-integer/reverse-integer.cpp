class Solution {
public:
    int reverse(int x) {
        
        long long int temp = x;
        long long int rev=0;
        while(temp){
            long long int k = temp%10;            
            rev=rev*10+k;
            if(rev>INT_MAX or rev<INT_MIN) return 0;
            temp=temp/10;
        }
        
        return rev;
        
    }
};