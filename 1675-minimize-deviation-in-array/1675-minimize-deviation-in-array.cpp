class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        
        // deviation => max diff => max_ele - min_ele
        // to find min deviation => minimize(max_ele) and maximise(min_ele)
        
        // so if after sorting the min_ele is even then do nothing this is min
        // but if it is odd we can multiply it with 2 to maximise it and it's now even
        
        // to minimise max_ele
        // if after sorting max_ele is odd then do nothing this is max
        // but if it is even we can divide max_ele untill max_ele is odd
        
        int min_ele = INT_MAX;
        priority_queue<int> pq;
        
        int n = nums.size();
        
        for(int i=0;i<n;i++){
            if(nums[i]&1){
                nums[i]*=2;
            }
            
            min_ele = min(min_ele,nums[i]);
            
            pq.push(nums[i]);
        }
        
        int mn = INT_MAX;
        
        // cout<<"MIN "<<min_ele<<endl;
        
        while(!(pq.top()&1)){
            int max_ele = pq.top();
            
            // cout<<"Max - "<<max_ele<<endl;
            
            pq.pop();
            
            mn = min(mn,(max_ele-min_ele));
            min_ele = min(min_ele,max_ele/2);
            
            pq.push(max_ele/2);
        }
        
        int ans = min(mn,(pq.top()-min_ele));
        
        return ans;       
        
    }
};