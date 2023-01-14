class Solution {
public:
    char dfs(unordered_map<char,vector<char>>&adj,char curr,vector<int>&visited){
        visited[curr-'a'] = 1;
        char min_char = curr;
        for(auto&child : adj[curr]){
            if(visited[child-'a'] == 0)
                min_char = min(min_char,dfs(adj,child,visited));
        }
        return min_char;
    }
    string smallestEquivalentString(string s1, string s2, string baseStr) {
        unordered_map<char,vector<char>>adj;
        for(int i=0;i<s1.size();i++){
            char u = s1[i];
            char v = s2[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        string result;
        int n = baseStr.size();
        for(int i=0;i<n;i++){
            char ch = baseStr[i];
            vector<int>visited(26,0);
            char min_char = dfs(adj,ch,visited);
            result.push_back(min_char);
        }
        return result;
    }
};