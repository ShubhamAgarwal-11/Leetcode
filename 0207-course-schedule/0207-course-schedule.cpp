class Solution {
public:
    bool topological_sort(unordered_map<int,vector<int>>&adj,vector<int>&indegree,int n){
        
        int count =0;
        queue<int>que;
        
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                que.push(i);
                count++;
            }
        }
        
        while(!que.empty()){
            int u = que.front();
            que.pop();
            
            for(auto&v : adj[u]){
                indegree[v]--;
                if(indegree[v] == 0){
                    count++;
                    que.push(v);
                }
            }
        }
        
        if(count == n) return true;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegree(numCourses,0);
        unordered_map<int,vector<int>>adj;
        for(auto& vec : prerequisites){
            int a = vec[0];
            int b = vec[1];
//             b----->a
            adj[b].push_back(a);
            indegree[a]++;
        }
        return topological_sort(adj,indegree,numCourses);
    }
};