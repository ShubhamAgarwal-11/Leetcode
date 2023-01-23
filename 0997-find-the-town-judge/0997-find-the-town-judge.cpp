class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int>ans(n+1,0);
        for(auto x : trust){
            int u = x[0];
            int v = x[1];
            
            ans[u]--;
            ans[v]++;
        }
        for(int i=1;i<ans.size();i++){
            if(ans[i] == n-1)
                return i;
        }
        return -1;
    }
};