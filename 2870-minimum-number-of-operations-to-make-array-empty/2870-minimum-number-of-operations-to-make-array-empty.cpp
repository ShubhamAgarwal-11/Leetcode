class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>umap;
        int ans=0;
        for(int i=0;i<nums.size();i++)
            umap[nums[i]]++;
        for(auto it = umap.begin();it != umap.end();it++){
            if(it->second == 1)
                return -1;
            ans+=ceil((double)it->second/3);
        }
        return ans;
    }
};