class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>umap;
        for(int i=0;i<tasks.size();i++)
            umap[tasks[i]]++;
        int ans=0;
        for(auto it= umap.begin();it!=umap.end();it++){
            if(it->second == 1)
                return -1;
            int temp=it->second%3;
            if(temp == 0)
                ans+=it->second/3;
            else
                ans+=(it->second/3)+1;
        }
        return ans;
    }
};