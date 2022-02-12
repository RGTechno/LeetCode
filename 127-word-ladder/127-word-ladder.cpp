class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        
        set<string> st,visited;
        for(auto &i:wordList) st.insert(i);
        
        map<string,vector<string>> adj;
        
        queue<string> q;
        q.push(beginWord);
        
        visited.insert(beginWord);
        
        int path = 0;
                
        while(!q.empty()){
            int n = q.size();
            path++;
            for(int k=0;k<n;k++){
                string x = q.front();
                if(x == endWord) return path;  
                q.pop();
                for(int i=0;i<x.size();i++){
                    string temp = x;
                    for(int j='a';j<='z';j++){
                        temp[i]=j;
                        if(st.count(temp) and !visited.count(temp)){
                            q.push(temp);
                            visited.insert(temp);
                            adj[x].push_back(temp);
                        }
                    }
                }
            }
        }
        
        return 0;
               
//         for(auto it=adj.begin();it!=adj.end();it++){
//             cout<<it->first<<" - ";
//             for(auto j:it->second){
//                 cout<<j<<" ";
//             }
//             cout<<endl;
//         }        
        
//         cout<<"---"<<endl;    
        
        
    }
};