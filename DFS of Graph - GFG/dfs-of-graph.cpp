//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int>adj[],int source,vector<bool>&visited,vector<int>&result){
        visited[source]=true;
        result.push_back(source);
        for(auto&x : adj[source]){
            if(visited[x] == false)
                dfs(adj,x,visited,result);
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        vector<int>result;
        for(int i=0;i<V;i++){
            if(visited[i]!=true)
                dfs(adj,i,visited,result);
        }
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends