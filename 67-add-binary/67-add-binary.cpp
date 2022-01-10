class Solution {
public:
    string addBinary(string a, string b) {
        
        int n1=a.size();
        int n2=b.size();
        
//         if(n1>n2){
//             while((n1-n2)){
//                 b="0"+b;
//                 n1--;
//                 n2--;
//             }
//         }else if(n2>n1){
//             while((n2-n1)){
//                 a="0"+a;
//                 n2--;
//                 n1--;
//             }
//         }
                  
//         n1=a.size();
//         n2=b.size();          
        
        int carry=0;
        
        string ans="";
        
        while(n1>0 and n2>0){
            if(a[n1-1]=='1' and b[n2-1]=='1'){
                if(carry==0){
                    ans="0"+ans;
                    carry=1;
                }
                else{
                    ans="1"+ans;
                    carry=1;
                }
            }
            else if(a[n1-1]=='0' and b[n2-1]=='1'){
                if(carry==0){
                    ans="1"+ans;
                }else{
                    ans="0"+ans;
                }
            }
            else if(a[n1-1]=='1' and b[n2-1]=='0'){
                if(carry==0){
                    ans="1"+ans;
                }else{
                    ans="0"+ans;
                }
            }
            else{
                if(carry==0){
                    ans="0"+ans;
                }else{
                    ans="1"+ans;
                    carry=0;
                }
            }
            
            n1--;
            n2--;
        }
        
        if(n1>0){
            while(n1--){
                if(a[n1]=='1'){
                    if(carry==1){
                        ans="0"+ans;
                    }else{
                        ans="1"+ans;
                        carry=0;
                    }
                }else{
                    if(carry==1){
                        ans="1"+ans;
                        carry=0;
                    }else{
                        ans="0"+ans;
                    }
                }
            }
        }
        
        if(n2>0){
            while(n2--){
                if(b[n2]=='1'){
                    if(carry==1){
                        ans="0"+ans;
                    }else{
                        ans="1"+ans;
                        carry=0;
                    }
                }else{
                    if(carry==1){
                        ans="1"+ans;
                        carry=0;
                    }else{
                        ans="0"+ans;
                    }
                }
            }
        }
        
        if(carry==1){
            ans="1"+ans;
        }
        
        return ans;
        
    }
};