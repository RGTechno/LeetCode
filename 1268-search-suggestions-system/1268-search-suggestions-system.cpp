class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        
        sort(products.begin(),products.end());
        
        int n = searchWord.size();
        int n_p = products.size();
        
        vector<vector<string>> ans(n);
        
        for(int i=0;i<n;i++){
            string s = searchWord.substr(0,i+1);
            int k=0;
            for(int j=0;j<n_p and k<3;j++){
                string tmp = products[j].substr(0,i+1);
                if(tmp==s){
                    ans[i].push_back(products[j]);
                    k++;
                }
            }
        }
        
        return ans;
        
    }
};