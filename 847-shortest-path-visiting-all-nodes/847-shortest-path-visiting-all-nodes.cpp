class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        int i,j;
        int n=graph.size();
        int ans=0;
        
        queue<vector<int>>q;
        set<pair<int,int>> st;
                
        for(i=0;i<n;i++){
            vector<int> temp(3,0);
            int mask=(1<<i);
            int v=i;
            temp[0]=0;
            temp[1]=v;
            temp[2]=mask;
            q.push(temp);
            st.insert({v,mask});
        }
        
        while(!q.empty())
        {
            auto f=q.front();
            q.pop();
			
            if(f[2]==(1<<n)-1)
            {
                ans=f[0];
                break;
            }
            
            for(auto j:graph[f[1]])
            {
                int m=f[2]|(1<<j);
                if(!st.count({j,m}))
                {
                    st.insert({j,m});
                    vector<int> v(3,0);
                    v[0]=f[0]+1;
                    v[1]=j;
                    v[2]=m;
                    q.push(v);
                }
            }
            
        }
        return ans;
    }
};