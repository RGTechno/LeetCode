class Solution {
    static bool comp(vector<int> &a,vector<int> &b){
        return b[1]<a[1];
    }
public:
    int maximumUnits(vector<vector<int>>& v, int truckSize) {
        
        sort(v.begin(),v.end(),comp);
        
        int ans = 0;
        for(auto &i:v){
            if(i[0]<=truckSize){
                ans+=(i[0]*i[1]);
                truckSize-=i[0];
            }
            else{
                ans+=(truckSize*i[1]);
                truckSize=0;
            }
            
            if(truckSize<=0) break;
        }       
        
        return ans;
        
    }
};