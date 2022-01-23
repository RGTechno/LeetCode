class Solution {
public:    
    pair<int,int> firstForN(int n){        
        int f=0;        
        int adder=0;
        int p=10;
        int i=1;
        
        while(i<=n){
            f=f*p+i;
            adder=adder*p+1;
            i++;
            
        }
        
        return {f,adder};
    }
        
    vector<int> sequentialDigits(int low, int high) {
        
        
        vector<int> ans;        
        
        int k = low;
        
        int n = 0;
        while(k){
            k/=10;
            n++;
        }   
        
        pair<int,int> fAndAdd = firstForN(n);
        
        int f = fAndAdd.first;
        int adder = fAndAdd.second;
        
        while(f<=high){          
                        
            if(to_string(f)[n-1]=='9'){
                if(f>=low) ans.push_back(f);
                n++;
                fAndAdd = firstForN(n);        
                f = fAndAdd.first;
                adder = fAndAdd.second;
            }
            
            else if(f>=low){
                ans.push_back(f);
                f+=adder;
            }    
            
            // cout<<"f - "<<f<<endl<<"adder - "<<adder<<endl;
            
            else{
                f+=adder;
            }
        
            
            
        }     
        
            
        return ans;
    }
};