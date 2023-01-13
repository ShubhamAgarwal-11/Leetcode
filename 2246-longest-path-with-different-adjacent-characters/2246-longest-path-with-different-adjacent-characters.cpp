class Solution {
public:
    int result = 0;
    int dfs(unordered_map<int,vector<int>>&adj,int curr,int parent,string &s){
        int longest =0;
        int second_longest =0;
        
        for(int&child : adj[curr]){
            if(child == parent)
                continue;
            int child_length = dfs(adj,child,curr,s);
            if(s[child] == s[curr])
                continue;
            if(child_length > second_longest)
                second_longest = child_length;
            if(second_longest > longest)
                swap(second_longest,longest);
        }
        int one_side = max(longest,second_longest)+1;
        int no_one = 1;
        int both = longest + second_longest + 1;
        result = max({result,one_side,no_one,both});
        return(max(one_side,no_one));
    }
    int longestPath(vector<int>& parent, string s) {
        unordered_map<int,vector<int>>adj;
        for(int i=1;i<parent.size();i++){
            int u = i;
            int v = parent[i];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        result =0;
        dfs(adj,0,-1,s);
        return result;
    }
};