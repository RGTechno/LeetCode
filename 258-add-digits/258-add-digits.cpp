class Solution {
public:
    int addDigits(int num) {
        
        if(num>=0 and num<=9) return num;
        
        int sum = 0;
        while(num){
            int k = num%10;
            sum+=k;
            num/=10;
        }
        
        int sub = sum;
        
        if(sub>=10){
            sub = addDigits(sum);
        }
        
        return sub;
        
    }
};