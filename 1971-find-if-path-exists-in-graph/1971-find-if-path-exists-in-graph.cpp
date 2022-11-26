class Solution {
public:
    bool solve(vector<int>graph[],int n,int source,int dest){
        queue<int>q;
        vector<bool>visited(n,0);
        visited[source]=true;
        q.push(source);
        while(!q.empty()){
            int temp=q.front();
            q.pop();
            for(auto x : graph[temp]){
                if(!visited[x]){
                    visited[x]= true;
                    q.push(x);
                }
            }
        }
        return visited[dest];
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int>graph[n];
        for(auto x : edges){
            int u= x[0];
            int v= x[1];
            
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        return solve(graph,n,source,destination);
        
    }
};