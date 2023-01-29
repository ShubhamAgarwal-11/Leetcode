//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool cycleBFS(vector<int>adj[],int source,int parent,vector<bool>&visited){
      queue<pair<int,int>>que;
      visited[source] = true;
      que.push({source,parent});
      
      while(!que.empty()){
          pair<int,int>temp = que.front();
          que.pop();
          
          for(auto& x : adj[temp.first]){
              if(x == temp.second){
                  continue;
              }
              if(!visited[x]){
                  visited[x] = true;
                  que.push({x,temp.first});
              }else{
                return true;
              }
          }
      }
      return false;
  }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i] && cycleBFS(adj,i,-1,visited))
                return true;
        }
        return false;
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
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends