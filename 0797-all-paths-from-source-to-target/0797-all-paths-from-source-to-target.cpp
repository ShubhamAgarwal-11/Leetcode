class Solution {
public:
    void dfs(vector<vector<int>>&graph,int source,int target,vector<int>&temp,vector<vector<int>>&result){
        temp.push_back(source);
        if(source == target){
            result.push_back(temp);
        }else{
            for(auto&x: graph[source]){
                dfs(graph,x,target,temp,result);
            }
        }
        temp.pop_back();
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>result;
        vector<int>temp;
        int source=0,target=graph.size()-1;
        dfs(graph,source,target,temp,result);
        return result;
    }
};