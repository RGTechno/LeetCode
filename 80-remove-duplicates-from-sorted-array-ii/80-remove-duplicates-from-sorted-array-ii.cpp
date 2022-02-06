class Solution {
    
    void shift(vector<int> &nums,int n,int i){
        
        int temp = nums[i];
        
        for(int j=i+1;j<n;j++){
            nums[j-1] = nums[j];
        }
        
        nums[n-1] = temp;
    }
    
public:
    int removeDuplicates(vector<int>& nums) {
        
        int n = nums.size();
        
        int count = 1;
        
        int k = 1;
        
        int nSwaps = 0;
        
        for(int i=1;i<(n-nSwaps);i++){           
            
            if(nums[i]==nums[i-1]){
                count++;
                
                if(count<=2){
                    k++;
                    // cout<<"k - "<<k<<endl;
                }
                
                if(count>2){
                    shift(nums,n,i);
                    nSwaps++;
                    i-=1;
                }              
            }
            
            else{
                count = 1;
                k++;
                // cout<<"k - "<<k<<endl;
            }
            
        }
        
        // for(auto i:nums) cout<<i<<" ";
        // cout<<endl;
        // cout<<"k - "<<k<<endl;
        
        return k;
        
    }
};