//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
      
        vector<int>indegree(V,0);
        for(int u=0;u<V;u++){
            for(auto&v : adj[u]){
                indegree[v]++;
            }
        }
        
        int count=0;
        queue<int>que;
        for(int i=0;i<V;i++){
            if(indegree[i] == 0){
                que.push(i);
                count++;
            }
        }
        
        while(!que.empty()){
            int u= que.front();
            que.pop();
            
            for(auto&v : adj[u]){
                indegree[v]--;
                if(indegree[v] == 0){
                    que.push(v);
                    count++;
                }
            }
        }
        
        if(count == V)
            return false;
        else
            return true;
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