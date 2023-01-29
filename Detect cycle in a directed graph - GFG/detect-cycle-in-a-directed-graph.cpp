//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool cycleDFS(vector<int>adj[],int source,vector<bool>&visited,vector<bool>&inRecursion){
        visited[source] = true;
        inRecursion[source] = true;
        
        for(auto x : adj[source]){
            if(!visited[x] && cycleDFS(adj,x,visited,inRecursion))
                return true;
            else if(inRecursion[x])
                return true;
        }
        inRecursion[source] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool>visited(V,false);
        vector<bool>inRecursion(V,false);
        
        for(int i=0;i<V;i++){
            if(!visited[i] && cycleDFS(adj,i,visited,inRecursion))
                return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends