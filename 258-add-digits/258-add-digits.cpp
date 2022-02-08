class Solution {
public:
    
    /*
        Learning => Concept of digital roots 
        (iterative sum of digits until only single digit is left)
        
        Formula
        
        b => base (In this case 10)
        
        ans = 0 if n==0
        ans = 1 + ((n-1)mod(b-1)) if n!=0
        
        
        TC => O(1)
    */
    
    int addDigits(int num) {
        
        if(num==0) return 0;
        
        else return (1+((num-1)%9));
        
    }
};