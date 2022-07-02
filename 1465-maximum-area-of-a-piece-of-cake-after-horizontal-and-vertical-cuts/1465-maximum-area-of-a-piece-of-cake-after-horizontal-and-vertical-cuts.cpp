#define mod 1000000007
class Solution {
public:
    int maxArea(int he, int w, vector<int>& h, vector<int>& v) {
        
        sort(h.begin(),h.end());
        int hs = h.size();
        
        sort(v.begin(),v.end());
        int vs = v.size();
        
        long long int mxh = h[0]-0;
        for(int i=0;i<hs-1;i++){
            mxh=max(mxh,(long long int)(h[i+1]-h[i]));
        }
        
        mxh = max(mxh,(long long int)he-h[hs-1]);
        
        long long int mxv = v[0]-0;
        for(int i=0;i<vs-1;i++){
            mxv=max(mxv,(long long int)(v[i+1]-v[i]));
        }
        
        mxv = max(mxv,(long long int)w-v[vs-1]);
        
        long long int ans = (mxh*mxv);
        
        return ans%mod;
        
    }
};