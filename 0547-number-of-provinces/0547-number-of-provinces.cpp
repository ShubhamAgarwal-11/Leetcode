class Solution {
public:
    void BFS(unordered_map<int,vector<int>>&adj,int u,vector<bool>&visited){
        queue<int>que;
        visited[u] = true;
        que.push(u);
        
        while(!que.empty()){
            int temp = que.front();
            que.pop();
            
            for(auto&v : adj[temp]){
                if(visited[v] == false){
                    que.push(v);
                    visited[v] = true;
                }
            }
        }
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        unordered_map<int,vector<int>>adj;
        int n = isConnected.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j] == 1){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<bool>visited(n,false);
        int count=0;
        for(int i=0;i<n;i++){
            if(visited[i] == false){
                count++;
                BFS(adj,i,visited);
            }
        }
        return count;
    }
};