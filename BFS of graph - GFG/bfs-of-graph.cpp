//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    void bfs(vector<int> adj[],int source,vector<bool>&visited,vector<int>&result){
        visited[source]=true;
        result.push_back(source);
        queue<int>que;
        que.push(source);
        while(!que.empty()){
            int temp = que.front();
            que.pop();
            
            for(auto&x : adj[temp]){
                if(visited[x] == false){
                    visited[x]=true;
                    result.push_back(x);
                    que.push(x);
                }
            }
        }
    }
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int>result;
        vector<bool>visited(V,false);
        bfs(adj,0,visited,result);
        return result;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends