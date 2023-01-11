class Solution {
public:
    int dfs(unordered_map<int,vector<int>>&adj,int curr,int parent,vector<bool>&apple){
        int time = 0;
        
        for(auto child : adj[curr]){
            if(child == parent)
                continue;
            int timeFromChild = dfs(adj,child,curr,apple);
            if(timeFromChild > 0 || apple[child])
                time += timeFromChild + 2;
        }
        return time;
    }
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        unordered_map<int,vector<int>>adj;
        
        for(auto&x : edges){
            int u = x[0];
            int v = x[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        return dfs(adj,0,-1,hasApple);
    }
};